#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int n,m; cin >> n >> m;
	int a[m];
	for(int i = 0;i < m;++i){
		cin >> a[i];
	}
	sort(a,a+m);
	int res = 1000;
	for(int i = 0;i < m-n+1;++i){
		res = min(res,a[i+n-1] - a[i]);
	}
	cout << res;
} 