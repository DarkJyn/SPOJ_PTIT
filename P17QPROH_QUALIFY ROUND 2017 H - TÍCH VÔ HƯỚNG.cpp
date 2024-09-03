#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int t;cin >> t;
	int test = 1;
	while (t--) {
		int n; cin >> n;
		ll a[n];
		ll b[n];
		for(int i = 0;i < n;++i){
			cin >> a[i];
		}
		for(int i  =0; i < n;++i){
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		ll res = 0;
		for(int i = 0;i < n;++i){
			res += a[i] * b[i];
		}
		cout << "Case #"<<test<<": "<<res;
		test++;
		cout <<"\n";
 	}
	return 0;
}