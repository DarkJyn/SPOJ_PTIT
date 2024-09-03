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
		int n;
        int lm = 1, nm = 1;
		cin >> n;
		for (int i = 2; i <= sqrt(n); i++){
			int s = 0;
			while (n % i == 0){
				s++;
				n /= i;
			}
			if (s > 0){
				int k = s / 2;
				if (k > 0){
					lm *= pow(i, k);
                }
				s -= k * 2;
				if (s > 0){
					nm *= pow(i, s);
                }
			}
		}
		if (n > 1){
			nm *= n;
        }
		cout << lm << " " << nm << endl;
	}
}