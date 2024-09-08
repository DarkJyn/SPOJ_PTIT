#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll Try(ll a){
	ll c = 0;
	while (a != 0){
		if (a % 10 != 0){
			c = c * 10 + a % 10;
        }
		a /= 10;
	}
	while (c != 0){
		a = a * 10 + c % 10;
		c /= 10;
	}
	return a;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    ll a, b;
	cin >> a >> b;
	ll h = a + b;
	h = Try(h);
	a = Try(a);
	b = Try(b);
	if (a + b == h) cout << "YES";
	else cout << "NO";
}