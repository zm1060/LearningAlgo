#include <iostream>

using namespace std;

void solve(){
    int m,n;
    cin>>m>>n;
    cout<<m*n<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}