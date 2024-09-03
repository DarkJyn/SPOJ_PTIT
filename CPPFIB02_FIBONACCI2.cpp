#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int t;cin >> t;
	while(t--){
		ll n;cin >> n;
		ll a = 0;
		ll b = 1;
		while(a<n){
			ll c = a + b;
			b = a;
			a = c;
		}
		if(a == n) cout <<"YES";
		else cout << "NO";
		cout <<"\n";
	}
}