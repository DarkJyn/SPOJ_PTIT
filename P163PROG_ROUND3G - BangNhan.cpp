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
    int n, k;
	cin >> n >> k;
    int res = 0;
	for (int i = 1; i * i <= k; i++){
		if (k % i == 0){
			if (i <= n && k / i <= n) res += 2;
			if (i * i == k) res--;
		}
	}
	cout << res;
}