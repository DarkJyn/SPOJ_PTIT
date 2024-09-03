#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    while (1){
		int n;
		cin >> n;
		if (n == 0) break;
		if (n < 1e6){
			cout << n << endl;
        }
		else if (n < 5e6){
			cout << n * 9 / 10 << endl;
        }
		else{
			cout << n * 4 / 5 << endl;
        }
	}
}