#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	ll d1,d2,d3;
	cin >> d1 >>d2>>d3;
	ll a[4];
	a[0] = d1 +d2+d3;
	a[1] = 2*d1 + 2*d2;
	a[2] = 2*d1 + 2*d3;
	a[3] = 2*d2 + 2*d3;
	sort(a,a+4);
	cout << a[0];
}