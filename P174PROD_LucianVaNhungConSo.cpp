#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	long long m, n;
	cin >> m >> n;
	long long a = m % 5, b = m / 5, c = n % 5, d = n - c, e = n / 5;
	long long s1 = b * d, s2 = b * c, s3 = a * e;
	long long s = s1 + s2 + s3;
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= c; j++){
			if ((i + j) % 5 == 0)
				s++;
		}
	}
	cout << s;
}