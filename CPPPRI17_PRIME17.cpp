#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll prime[1000002];
void era(){
	prime[0] = 1;
	prime[1] = 1;
	for(int i = 2;i <=1002 ;++i){
		if(prime[i] == 0){
			for(int j = i*i;j <=1000002;j+=i){
				prime[j] = 1;
			}
		}
	}
}
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	era();
	int t;cin >> t;
	while(t--){
		ll l,r;
		cin >> l >> r;
		ll beg = sqrt(l);
		ll end = sqrt(r)+1;
		int cnt = 0;
		for(int i = beg;i < end;++i){
			if(prime[i] == 0) cnt++;
		}
		cout << cnt<<"\n";
	}
}
