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
		int m, n;
		cin >> m >> n;
		int a[m];
		for (int i = 0; i < m; i++) cin >> a[i];
        int b[n];
		for (int i = 0; i < n; i++) cin >> b[i];
		if (m <= n){
			cout << "Yes\n";
        }
		else cout << "No\n";
	}
}