#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
	cin >> t;
	while (t--){
		string a;
		cin >> a;
		int j = 0;
		if (a[0] == '9') j++;
		for (int i = j; i < a.size(); i++){
			if (a[i] > '4'){
				a[i] = '9' - a[i] + '0';
            }
		cout << a << endl;
        }
	}
}