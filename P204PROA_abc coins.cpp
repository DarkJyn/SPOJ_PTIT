#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n, a, b, c;
	cin >> n >> a >> b >> c;
	if (a < b - c){
		cout << n / a;
    }
	else{
		ll s = 0;
		while (n >= b){
			ll k = n / b;
			s += k;
			n = n - k * b + c * k;
		}
		ll k = n / a;
		s += k;
		cout << s;
	}
}