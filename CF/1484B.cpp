#include <iostream>
using namespace std;
long long arr[10000];
long long n,m,c,s;
void solve(){
    int n;
    cin>>n;

    if(n<=2){
        cout<<"0"<<endl;
        return;
    }
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    long long t1,t2,t3;
    t1 = abs(arr[1] - arr[0]);
    t2 = abs(arr[2] - arr[1]);
    if(t1 == 0 || t2 == 0){
        cout<<"-1"<<endl;
        return;
    }
    t3 = abs(arr[3] - arr[2]);
    
    if(t1 != t2 && t1 != t3 && t2 != t3){
        cout<<"-1"<<endl;
        return;
    }
    if(t1!=t2){
        if(t1 > t2) cout<<t1+t2<<" "<<t2<<endl;
        else cout<<t1+t2<<" "<<t1<<endl;
        return;
    }else if(t1!=t3){
        if(t1 > t3) cout<<t1+t3<<" "<<t3<<endl;
        else cout<<t1+t3<<" "<<t1<<endl;
        return;
    }else if(t2!=t3){
        if(t2 > t3) cout<<t2+t3<<" "<<t3<<endl;
        else cout<<t2+t3<<" "<<t2<<endl; 
        return;       
    }else{
        cout<<t1+t2<<" "<<t1<<endl;
        return;
    }



}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}