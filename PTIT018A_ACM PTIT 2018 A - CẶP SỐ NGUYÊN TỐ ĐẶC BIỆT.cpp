#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

vector<int> a(1000001, 0);
void sang(){
	for (ll i = 2; i * i <= 1000000; i++){
		if (!a[i]){
			for (ll j = i * i; j <= 1000000; j += i){
				a[j] = 1;
            }
        }
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    sang();
	int t;
	cin >> t;
	while (t--){
		int b, c, s = 0;
		cin >> b >> c;
		for (int i = b; i <= c; i++){
			if (!a[i] && !a[i + 6] && i + 6 <= c){
				s++;
            }
		}
		cout << s << "\n";
	}
}