#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
	cin >> n;
	ll a[n][11];
    ll res = -1111;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 11; j++){
			cin >> a[i][j];
        }
    }
	for (int i1 = 0; i1 < n - 2; i1++){
		for (int i2 = i1 + 1; i2 < n - 1; i2++){
			for (int i3 = i2 + 1; i3 < n; i3++){
				ll s = 0;
				for (int i = 0; i < 11; i++){
					s += max(a[i1][i], max(a[i2][i], a[i3][i]));
                }
				res = max(s, res);
			}
		}
	}
	cout << res;
}