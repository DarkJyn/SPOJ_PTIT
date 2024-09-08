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
	int a[n + 5], b[n + 5];
    int cnt = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
    }
	for (int i = 0; i < n; i++){
		int check = 0;
		for (int j = 0; j < n; j++)
			if (i != j && b[j] == a[i])
				check = 1;
		if (check == 0)
			cnt++;
	}
	cout << cnt;
}