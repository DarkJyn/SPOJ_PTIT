#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string a;
	cin >> a;
	ll s = 0;
    ll ss = 0;
	for (int i = 0; i < a.size(); i++){
		if (a[i] == '1'){
			ss++;
        }
		else if (a[i] == '2') s += ss;
	}
	cout << s;
}