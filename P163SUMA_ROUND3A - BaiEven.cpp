#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    long long n, k, b[26] = {}, s = 0;
	cin >> n >> k;
	char a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		b[a[i] - 'A']++;
	}
	sort(b, b + 26);
	for (int i = 25; i >= 0; i--){
		if (b[i] > k){
			s += k * k;
			break;
		}
		else{
			s += b[i] * b[i];
			k -= b[i];
			if (k == 0)
				break;
		}
	}
	cout << s;
}