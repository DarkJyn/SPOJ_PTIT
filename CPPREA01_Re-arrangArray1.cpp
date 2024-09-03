#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while(t--){
		ll n;cin >> n;
		ll a[n+5];
		ll save[n+5];
		for(ll i = 0;i < n;++i){
			save[i] = -1;
		}
		for(ll i = 0;i < n;++i){
			cin >> a[i];
			if(a[i] < n ) save[a[i]] = a[i];
		}
		for(ll i = 0;i < n;++i){
			cout << save[i]<<" ";
		}
		cout <<"\n";
	}
} 