#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
	int t;cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		if(n % 2 == 1) cout << "0\n";
		else{
			int cnt = 0;
			for (ll i = 1; i <= sqrt(n); i++){
				if (n % i == 0){
					if (i % 2 == 0)
						cnt++;
					if ((n / i) % 2 == 0)
						cnt++;
				}
			}
			if (sqrt(n) == (ll)sqrt(n)){
				ll k = sqrt(n);
				if (k % 2 == 0)
					cnt--;
			}	
			cout << cnt<<"\n";
		}
	}
	return 0;
}