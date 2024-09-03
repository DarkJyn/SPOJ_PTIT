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
		int n, s = 0;
		cin >> n;
		for (int i = 1; i < sqrt(n); i++){
			if (n % i == 0){
				if (i % 2 == 0) s++;
				if ((n / i) % 2 == 0) s++;
			}
		}
		int k = sqrt(n);
		if (k % 2 == 0 && k * k == n) s++;
		cout << s << endl;
	}
}