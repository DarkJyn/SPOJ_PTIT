#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;
	cin >> n;
	ll a[n];
    ll  s = 0;
    ll ma = 0, maa = 0;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++){
		s += a[i];
		if (s < 0){
			s = 0;
        }
		if (s > ma)	ma = s;
	}
	s = 0;
	for (int i = 0; i < n; i++){
		s += a[i];
		if (s > 0){
			s = 0;
        }
		if (s < maa) maa = s;
	}
	if (abs(maa) > ma){
		cout << abs(maa);
    }
	else cout << ma;
}