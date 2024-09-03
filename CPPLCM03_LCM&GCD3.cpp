#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
ll solve(ll k ,ll u){
	if(u==1) return k;
	if(u == 0) return 1;
	if(u % 2 == 0) return (solve(k,u/2)*solve(k,u/2))%MOD;
	return (k*solve(k,u-1))%MOD;
}
ll ucln(ll a,ll b){
	while(b!=0){
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >>n;
		ll a[n];
		for(int i = 0;i < n;++i) cin >> a[i];
		ll k = 1;
		for(int i = 0;i < n;++i){
			k *= a[i];
			k = k%MOD;
		}
		ll u = a[0];
		for(int i = 1;i < n;++i){
			u = ucln(u,a[i]);
		}
		cout << solve(k,u) <<"\n";
	}
}