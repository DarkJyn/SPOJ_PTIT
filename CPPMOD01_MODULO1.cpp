#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >>t;
	while(t--){
		ll x,y,p;
		cin >> x >> y >> p;
		ll fac = 1;
		for(int i = 1;i <= y;++i){
			fac = (fac * x) % p;
		}
		cout << fac <<"\n";
	}
}