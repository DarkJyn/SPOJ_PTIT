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
	string a, b;
	cin >> a >> b;
    int s = 0;
	for (int i = 0; i < n; i++){
		int c = a[i], d = b[i];
		if (c < d){
			swap(c, d);
        }
		if (c - d > d + 10 - c){
			s += d + 10 - c;
        }
		else{   
			s += c - d;
        }
	}
	cout << s;
}