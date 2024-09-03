#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll n,d;cin >> n>>d;
	ll a[n];
	for(ll i = 0;i < n;++i){
		cin >> a[i];
	}
	ll res = 0;
	for(ll i = 1;i < n;++i){
		if(a[i-1]>=a[i]){
			ll tmp = a[i-1] - a[i];
			tmp = tmp / d;
			tmp++;
			a[i] += tmp*d;
			res += tmp;
		}
	}
	cout << res;
} 