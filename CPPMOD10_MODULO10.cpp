#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int t;cin >> t;
	while(t--){
		ll n;cin >>n;
		ll k;cin >> k;
		ll a[n];
		for(int i = 0;i < n;++i){
			cin>> a[i];
		}
		ll s = 0;ll x = 1;
		for(int i = n-1;i >= 0;--i){
			s = (s+a[i]*x) % MOD;
			x = (x*k) % MOD;
		}
		cout << s<<"\n";
	}
}