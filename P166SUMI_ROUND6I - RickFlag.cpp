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
    int s = 0;
	for (int i = 0; i < n; i++){
        int x;
		cin >> x;
		if (x == 0)	s++;
	}
	if (s == 1){
		cout << "YES";
    }
	else{
		cout << "NO";
    }
}