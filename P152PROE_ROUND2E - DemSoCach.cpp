#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	ll n;cin >> n;
	ll a[n];
	ll sum[n];
	for(ll i = 0;i < n;++i){
		cin >> a[i];
	}
	sum[0] = a[0];
	for(ll i = 1;i < n;++i){
		sum[i] = sum[i-1] + a[i];
	}
	ll ans = 0;
	if(sum[n-1] % 3 != 0){
		cout << ans;
	}
	else{
		ll tmp = 0;
		for(ll i = n-2;i>=0;i--){
			if(sum[i] == sum[n-1]/3) ans += tmp;
			if(sum[i] == 2*sum[n-1]/3) tmp++;
		}
		cout << ans;
	}
}