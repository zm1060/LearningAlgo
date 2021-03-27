#include <iostream>
#include <queue>

using namespace std;
int N,Level,K;
vector<int> G[1005];

int bfs(int K){
    queue<int> Q;
    int vis[1005] = {0};
    int num = 0;
    int level[1005] = {0};
    
    Q.push(K);
    vis[K] = 1;

    while(!Q.empty()){
        int h = Q.front();
        Q.pop();
        for(int i :G[h]){
            if(vis[i] == 0 && level[h] < Level){
                Q.push(i);
                vis[i] = 1;
                level[i]= level[h] + 1;
                num++;
            }
        }
    }
    return num;
}

int main(){
    cin>>N>>Level;
    int M,temp;
    for(int i = 1;i<=N;i++){
        cin>>M;
        for(int j = 0;j<M;j++){
            cin>>temp;
            G[temp].push_back(i);
        }
    }
    cin>>K;
    while(K--){
        int a;
        cin>>a;
        cout<<bfs(a)<<endl;
    }
    return 0;
}
