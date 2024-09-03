#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		ll a[3];
		cin >> a[0] >> a[1]>>a[2];
		sort(a,a+3);
		cout << a[2] - a[0]<<"\n";
	}
}