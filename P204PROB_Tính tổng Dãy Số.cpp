#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;
	cin >> n;
	if (n % 2 == 0)	cout << n / 2;
	else cout << "-" << (n + 1) / 2;
}