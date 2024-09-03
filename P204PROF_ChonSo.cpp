#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	long long n, ma = 1;
	cin >> n;
	for (long long i = 1; i <= sqrt(n); i++){
		if (n % i == 0){
			long long ok = 0, k = n / i;
			for (long long j = 2; j <= sqrt(k); j++){
				long long h = j * j;
				if (k % h == 0)
				{
					ok = 1;
					break;
				}
			}
			if (ok == 0){
				cout << n / i;
				return 0;
			}
			for (long long j = 2; j <= sqrt(i); j++){
				long long h = j * j;
				if (i % h == 0){
					ok = 0;
					break;
				}
			}
			if (ok == 1) ma = i;
		}
	}
	cout << ma;
}
