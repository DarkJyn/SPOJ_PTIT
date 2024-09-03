#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, ma = 0;
	cin >> n;
	int mi = n;
	if (n == 1) cout << "0 1";
	else if (n < 6) cout << "0 2";
	else{
		for (int i = 1; i <= 7; i++){
			int m = n, s = 0;
			if (i > 1) s += 2;
			else if (i == 1) s ++;
			m -= i;
			int k = m / 7;
			s += 2 * k;
			m = m % 7;
			if (m == 6) s++;
			if (s > ma) ma = s;
			if (s < mi) mi = s;
		}
		cout << mi << " " << ma;
	}
}