#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
	int c, v0, v1, a, l, s = 0, ss = 0;
	cin >> c >> v0 >> v1 >> a >> l;
	while (s < c){
		if (s > 0) s -= l;
		int k = v0 + ss * a;
		ss++;
		if (k > v1) k = v1;
		s += k;
	}
	cout << ss;
}