#include <iostream>
#include <vector>
using namespace std;

int e[300][300],n,m,k,ans = 99999999,ansid;
vector<int> v;

void check(int index){
	int sum = 0,cnt, flag = 1;
	scanf("%d",&cnt);
	set<int> s;
	vector<int> cnt();
}

int main(){
	scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        int t1, t2, t;
        scanf("%d%d%d", &t1, &t2, &t);
        e[t1][t2] = e[t2][t1] = t;
    }
    scanf("%d", &k);
    for (int i = 1; i <= k; i++) check(i);
    	printf("Shortest Dist(%d) = %d\n", ansid, ans);
    return 0;
}