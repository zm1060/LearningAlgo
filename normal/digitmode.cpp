#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<long long> mode(10,0);
long long data[100000];
long long result[1000];
long long pro(long long t){
	fill(mode.begin(),mode.end(),0);

	while(t != 0){
		mode[t%10]++;
		t/=10;
	}
	long long maxv = -1;
	long long maxi = -1;
	//find the most frequent bit
    for(long long i = 0;i<10;i++){
		if(mode[i] > maxv){
			maxv = mode[i];
			maxi = i;
		}else if(mode[i] == maxv){
			if(i > maxi){
				maxv = mode[i];
				maxi = i;
			}
		}
	}
	return maxi;
}

long long process(long long t){
	long long ans = 0;

	for(long long i = 1;i<=t;i++){
		ans += pro(i);
	}
	return ans;
}


int main(){
	/*
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	*/
	
	long long T;//test case
	long long temp;
	cin>>T;
	for(long long i = 0;i<T;i++){
		cin>>temp;
		result[i] = process(temp)%((long long)1000000000 + 7);
	}
	for(long long i = 0;i<T;i++){
		cout<<result[i]<<endl;
	}
	return 0;
}