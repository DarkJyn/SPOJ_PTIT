#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
	ll s = 0;
	cin >> n >> k;
	int a[n], b[n - 1];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (i == 0){
			continue;
        }
		b[i - 1] = a[i];
	}
	sort(b, b + n - 1);
	for (int i = 0; i < n - k - 1; i++) s -= b[i];
	for (int i = n - k - 1; i < n - 1; i++){
		s += b[i];
    }
	s += a[0];
	cout << s;
}