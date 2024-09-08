#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll a,b;cin >> a >> b;
	ll mi = min(a,b);
	ll ma = max(a,b);
	ll cnt = 0;
	while(mi != ma && ma != 0 && mi != 0){
		ll tmp = ma / mi;
		cnt+=tmp;
		ma = ma - tmp * mi;
		swap(ma,mi);
	}
	cout << cnt;
} 