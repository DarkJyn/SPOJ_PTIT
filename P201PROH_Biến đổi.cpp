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
		int a, b;
		cin >> a >> b;
		if (a == 3){
			if (b > 3) cout << "NO\n";
			else cout << "YES\n";
		}
		else if (a == 2){
			if (b > 3){
				cout << "NO\n";
            }
			else cout << "YES\n";
		}
		else if (a == 1){
			if (b > 1){
				cout << "NO\n";
            }
			else{
				cout << "YES\n";
            }
		}
		else cout << "YES\n";
	}
}