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
    int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; i++){
		cin >> a[i];
    }
        
	for (int i = 0; i < m; i++){
		cin >> b[i];
    }
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i] == b[j]){
				cout << a[i] << " ";
				break;
			}
		}
	}
}