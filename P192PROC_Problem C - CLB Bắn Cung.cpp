#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int n;cin >> n;
	ll a[n];
	ll res = 0;
	for(int i  =0;i < n;++i){
		cin >> a[i];
		res += a[i];
	}
	ll tmp = 0;
	for(int i = 0;i < n-1;++i){
		tmp += a[i]*(res - a[i]);
		res -= a[i];
	}
	cout << tmp;
}
