#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	ll n, k;
	cin >> n >> k;
    ll s = 0; 
    ll cnt = 0;
	long long a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] < 0)
			cnt++;
	}
	sort(a, a + n);
	if (cnt > 0){
		if (cnt > k){
			for (int i = 0; i < k; i++){
				a[i] *= -1;
            }
		}
		else{
			for (int i = 0; i < cnt; i++){
				a[i] *= -1;
            }
			sort(a, a + n);
			k -= cnt;
			if (k % 2 == 1) a[0] *= -1;
		}
	}
	else if (k % 2 == 1) a[0] *= -1;
	for (int i = 0; i < n; i++){
		s += a[i];
    }
	cout << s;
}