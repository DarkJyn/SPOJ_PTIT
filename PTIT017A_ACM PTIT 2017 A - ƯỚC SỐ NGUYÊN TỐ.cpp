#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

vector<int> v, a(10000001, 0), f(10000001, 0);
void era(){
	for (ll i = 2; i * i <= 10000000; i++){
		if (!a[i]){
			for (ll j = i * i; j <= 10000000; j += i){
				a[j] = 1;
            }
		}
	}
	for (int i = 2; i <= 10000000; i++){
		if (!a[i]){
			v.push_back(i);
        }
    }
	for (int i : v){
		for (int j = i; j <= 10000000; j += i){
			f[j]++;
        }
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    era();
	int t;
	cin >> t;
	for (int k = 1; k <= t; k++){
		int l, r, n, s = 0;
		cin >> l >> r >> n;
		for (int i = l; i <= r; i++){
			if (f[i] == n){
				s++;
            }
        }
		cout << "Case #" << k << ": " << s << endl;
	}
}