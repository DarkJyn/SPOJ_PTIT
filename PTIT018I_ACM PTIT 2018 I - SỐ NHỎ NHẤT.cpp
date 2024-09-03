#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
	cin >> t;
	while (t--){
		ll x, y, z, n;
		cin >> x >> y >> z >> n;
		ll m = (x * y) / __gcd(x, y);
		m = m * z / __gcd(m, z);
		if (ceil(pow(10, n - 1) / m) < ceil(pow(10, n) / m)){
			cout << m * (ll)(ceil(pow(10, n - 1) / m)) << endl;
        }
		else cout << "-1" << endl;
	}
}