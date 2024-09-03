#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		ll a[n];
		for(int i = 0;i < n;++i){
			cin >> a[i];
		}
		ll b[n];
		b[0] = a[0] * a[1];
		b[n-1] = a[n-1]*a[n-2];
		for(int i = 1;i < n-1;++i){
			b[i] = a[i-1] * a[i+1];
		}
		for(int i = 0; i < n;++i){
			cout << b[i] <<" ";
		}
		cout << "\n";
	}	
	return 0;
}