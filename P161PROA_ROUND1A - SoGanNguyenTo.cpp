#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int nt(ll k){
	if (k < 2) return 0;
	for (int i = 2; i <= sqrt(k); i++){
		if (k % i == 0) return 0;
	}
	return 1;
}
int gnt(ll n){
	ll k = sqrt(n);
	if (k * k == n){
		if (nt(k) == 1) return 1;
	}
	return 0;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	ll t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		if (gnt(n) == 1) cout << "YES\n";
		else cout << "NO\n";
	}	
}