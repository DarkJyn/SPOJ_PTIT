#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll luyth(ll a,ll b){
	ll res = 1;
	for(int i = 0; i < b;++i){
		res *= a;
	}
	return res;
}
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		ll n;cin >> n;
		if( n <= 10) cout << n;
		else{
			ll cnt = 0;
			while(n > 10){
				ll tmp = n % 10;
				if( tmp >= 5){
					n  = n/10 + 1;
				}
				else{
					n /= 10;
				}
				cnt++;
			}
			cout << n*luyth(10,cnt);
		}
		cout << "\n";
	}
}
