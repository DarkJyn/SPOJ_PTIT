#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int sodacbiet(ll k){
	for (ll j = 2; j <= sqrt(k); j++){
		if (k % j == 0){
			if (sqrt(j) == (float)sqrt(j) || sqrt(k / j) == (float)sqrt(k / j)) return 0;
        }
    }
	if (sqrt(k) == (float)sqrt(k)) return 0;
	return 1;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    long long n, s = 0;
	cin >> n;
	if (n == 1){
		cout << "1";
		return 0;
	}
	for (ll i = 1; i <= sqrt(n); i++){
		if (n % i == 0){
			if (sodacbiet(i) == 1 && s < i){
				s = i;
            }
			if (sodacbiet(n / i) == 1 && s < n / i){
				s = n / i;
            }
		}
	}
	cout << s;
   
}