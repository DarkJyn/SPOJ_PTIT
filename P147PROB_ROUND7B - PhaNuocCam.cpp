#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	double res = 0;
	for(int i = 0;i < n;++i){
		res += 1.0*a[i]/100;
	}
	cout << setprecision(12)<<res*100/n;
}
