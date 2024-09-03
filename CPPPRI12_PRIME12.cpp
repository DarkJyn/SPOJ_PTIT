#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t;cin >>t;
	while(t--){
		int n;
		int k;
		cin >> n >> k;
		int cnt = 0;
		for(int i = 2; i <= sqrt(n);++i){
			while(n%i==0){
				n/=i;
				cnt++;
				if(cnt == k){
					cout << i<<"\n";
				}
			}
		}
		if(n>1){
			cnt++;
			if(cnt == k){
				cout << n <<"\n";
			}
		}
		if(cnt<k) cout <<"-1\n";
	}
}