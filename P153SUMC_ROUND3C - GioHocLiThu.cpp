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
    int a, b, n;
	cin >> a >> b >> n;
	n = n % 6;
	if (n == 1) cout << a;
	else if (n == 2) cout << b;
	else if (n == 3) cout << b - a;
	else if (n == 4) cout << -a;
	else if (n == 5) cout << -b;
	else if (n == 0) cout << a - b;
}