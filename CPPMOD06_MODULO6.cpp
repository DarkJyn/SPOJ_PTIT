#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll solveMOD(string a, ll m){
	ll res = 0;
	for(int i =0;i < a.length();++i){
		res = (res*10 + a[i] - '0') % m;
	}
	return res;
}
ll power(ll a,ll b, ll m){
	if(b == 0) return 1;
	if(b == 1) return a;
	if(b % 2 == 0) return (power(a,b/2,m)*power(a,b/2,m))%m;
	else return (a*power(a , b - 1 ,m))%m;
}
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		string a;
		cin >> a;
		ll b,m;
		cin >> b >> m;
		ll tmp = solveMOD(a,m);
		cout << power(tmp,b,m)<<"\n";
	}
}
