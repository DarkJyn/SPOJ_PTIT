#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int mark[5005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll n;cin >> n;
	ll k; cin >> k;
	ll a =1;
	for(int i = 0;i < k;++i){
		a*=10;
	}
	ll ucln = __gcd(a,n);
	ll bcnn = (n / ucln) * a;
	cout << bcnn;
}
