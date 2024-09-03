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
    int n;
	cin >> n;
    int cnt = 0;
	for (int i = 1; i <= n; i++){
		for (int j = i + 1; j < n; j++){
			int k = i * i + j * j;
			int h = sqrt(k);
			if (h > n) break;
			if (h * h == k) cnt++;
		}
	}
	cout << cnt;   
}