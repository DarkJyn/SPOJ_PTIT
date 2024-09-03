#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int mark[5005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll f[100];
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	for(int i = 3;i <= 100;++i){
		f[i] = f[i-1] + f[i-2];
	}
	int t;
	cin >> t;
	while(t--){
		int n;cin >> n;
		cout << f[n] <<"\n";
	}
}
