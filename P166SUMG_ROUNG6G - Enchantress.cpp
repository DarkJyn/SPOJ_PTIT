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
    ll n;
	cin >> n;
	for (int i = 0; i < n; i++){
		ll a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && (b == 0 || c == 0)){ 
			cout << "NO" << endl;
        }
		else{
			if (b == c){
				cout << "YES" << endl;
            }
            else{
				ll t = c - b;
				if (t < 0){
					t = -t;
                }
				if (t % 3 != 0){
					cout << "NO" << endl;
                }
				else{
                    cout << "YES" << endl;
                }
			}
		}
	}
}