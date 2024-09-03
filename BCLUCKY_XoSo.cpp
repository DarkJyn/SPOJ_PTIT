#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll n;cin >> n;
	ll x;cin >> x;
	ll total = n*x;
	ll a[n];
	map <ll,ll> mp;
	vector <ll> v;
	ll tmp = __LONG_MAX__;
	for(int i = 0;i < n;++i){
		cin >> a[i];
		mp[a[i]]++;
	}
	for(int i = 0;i < n;++i){
		if(mp[a[i]] < tmp){
			tmp = mp[a[i]];
		}
	}
	for(int i = 0;i < n;++i){
		if(mp[a[i]] == tmp){
			v.push_back(a[i]);
		}
	}
	sort(v.begin(),v.end());
	cout << total - v[v.size()-1]*tmp;
} 