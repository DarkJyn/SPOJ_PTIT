#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
	sort(a, a + n);
	if (n % 2 == 1){
		cout << a[(n - 1) / 2];
    }
	else{
		int k = n / 2;
		long long s1 = 0, s2 = 0;
		for (int i = 0; i < n; i++){
			s1 += abs(a[k - 1] - a[i]);
        }
		for (int i = 0; i < n; i++){
			s2 += abs(a[k] - a[i]);
        }
		if (s1 <= s2){
			cout << a[k - 1];
        }
		else cout << a[k];
	}
}
