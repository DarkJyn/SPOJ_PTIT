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
		ll xa, ya, ua, va, xb, yb, ub, vb;
		cin >> xa >> ya >> ua >> va >> xb >> yb >> ub >> vb;
		if ((vb >= ya && vb <= va && xb <= ua && ub >= xa) || (vb > va && yb <= va && xb <= ua && ub >= xa)){
			cout << "1" << endl;
        }
		else cout << "0" << endl;
	}
}