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
    int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n + 5];
        int mark[1006] = {};
		for (int i = 0; i < n; i++){
			cin >> a[i];
			mark[a[i]]++;
		}
        int maxx = 0;
        int res = 0;
		for (int i = 0; i < 1001; i++){
			if (mark[i] > maxx){
				maxx = mark[i];
				res = i;
			}
		}
		cout << res <<"\n";
	}
}