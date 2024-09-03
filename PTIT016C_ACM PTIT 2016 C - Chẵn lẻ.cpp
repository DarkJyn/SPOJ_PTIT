#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		cin >> s;
		int a[s.size()];
		for (int i = 0; i < s.size(); i++){
            a[i] = s[i] - 48;
        }
        int ok = 1;
		for (int i = 0; i < s.size(); i++){
			if (i % 2 == 0 && a[i] % 2 == 0){
				ok = 0;
				break;
			}
			else if (i % 2 == 1 && a[i] % 2 == 1){
				ok = 0;
				break;
			}
		}
		if (ok == 0){
			cout << "NO" << endl;
        }
		else cout << "YES" << endl;
	}
}