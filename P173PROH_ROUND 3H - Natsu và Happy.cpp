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
		int n;
		cin >> n;
		int k = sqrt(n);
        int s = 0;
		for (int i = 1; i <= k; i++){
			if (n % i == 0){
				if (i % 2 == 0) s++;
				if ((n / i) % 2 == 0) s++;
			}
		}
		if (k * k == n && k % 2 == 0) s--;
		cout << s << endl;
	}
}