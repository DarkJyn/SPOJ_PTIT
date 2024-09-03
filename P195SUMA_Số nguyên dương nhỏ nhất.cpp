#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
    }
	sort(a, a + n);
	if (n == 0)	cout << "-1";
	else{
		if (k == 0){
			if (a[0] == 1) cout << "-1";
			else cout << "1";
		}
		else{
			if (a[k] == a[k - 1] && k != n)	cout << "-1";
			else cout << a[k - 1];
		}
	}
}