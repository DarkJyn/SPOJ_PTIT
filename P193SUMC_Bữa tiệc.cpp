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
		long long n;
		cin >> n;
		if (n >= 2) cout << n - 2 << endl;
		else cout << 0 << endl;
	}
}
