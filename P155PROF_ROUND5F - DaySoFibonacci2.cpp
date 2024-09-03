#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    ll a, b, n;
	cin >> a >> b >> n;
	n = n % 6;
	if (n == 1) n = a;
	else if (n == 2) n = b;
	else if (n == 3) n = b - a;
	else if (n == 4) n = -a;
	else if (n == 5) n = -b;
	else if (n == 0) n = a - b;
	if (n < 0) n += 1e9 + 7;
	else n = n % (1000000007);
	cout << n;
}