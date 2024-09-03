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
    int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<int> c;
	c.push_back(a[0]);
	for (int i = 0; i < n; i++){
		int s = 0;
		for (int j = 0; j < c.size(); j++){
			if (a[i] != c[j])
				s++;
		}
		if (s == c.size()) c.push_back(a[i]);
	}
	if (c.size() == 1 || c.size() == 2) cout << "YES";
	else if (c.size() == 3){
		sort(c.begin(), c.end());
		if (c[0] + c[2] == 2 * c[1]) cout << "YES";
		else cout << "NO";
	}
	else cout << "NO";
}