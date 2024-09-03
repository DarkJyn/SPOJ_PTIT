#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
	cin >> t;
	while (t--){
		ll a, b, c;
		cin >> a >> b >> c;
		ll s = sqrt(a * b * c);
		ll m = (s / a + s / b + s / c) * 4;
		cout << m << endl;
	}
    
}