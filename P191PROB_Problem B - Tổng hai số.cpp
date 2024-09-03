#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, s = 0;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++){   
		cin >> a[i];
    }
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] + a[j] == m) s++;
		}
	}
	cout << s;
}