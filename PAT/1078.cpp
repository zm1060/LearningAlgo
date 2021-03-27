

#include <iostream>

using namespace std;
int M,N,hashtable[10100];
bool isprime(int x){
    if( x == 1) return false;
    for(int i = 2;i*i<=x;i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

void insert(int key){
    for(int step = 0;step<M;step++){
        int index = (key + step*step)%M;


        if(hashtable[index] == 0){
            hashtable[index] = 1;
            cout<<index % M;
            return;
        } 
    }
    cout<<'-';

}


int main(){
    cin>>M>>N;
    while(!isprime(M)) M++;
    for(int i = 0;i<N;i++){
        int key;
        cin>>key;
        if(i != 0) cout<<' ';
        insert(key);
    }
    return 0;
}