#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		ll n;cin >> n;
		int cnt = 0;
		for(int i = 0;i <=sqrt(n/2);++i){
			ll tmp = n - i * i;
			if(float(sqrt(tmp)) == sqrt(tmp)) cnt++;
		}
		cout << cnt<<"\n";
	}
}