#include <bits/stdc++.h>
using namespace std;
long long chiadu(string a, long long b){
	long long du = 0;
	for (int i = 0; i < a.length(); i++)
		du = (du * 10 + a[i] - 48) % b;
	return du;
}
long long nhan(long long n, long long m, long long k){
	if (m == 0)
		return 0;
	if (m % 2 == 0)
		return nhan(n * 2 % k, m / 2, k) % k;
	return (nhan(n % k, m - 1, k) % k + n % k) % k;
}
long long poww(long long n, long long m, long long k){
	if (m == 0)
		return 1;
	long long p = poww(n, m / 2, k);
	long long res = nhan(p, p, k);
	if (m % 2 == 1)
		res = nhan(res, n, k);
	return res;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string a;
	long long b, m;
	cin >> a >> b >> m;
	long long k = chiadu(a, m);
	cout << poww(k, b, m);
}