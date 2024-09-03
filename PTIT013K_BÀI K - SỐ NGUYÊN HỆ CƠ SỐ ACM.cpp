#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--){
		int n;cin >> n;
		int fac[10];
		fac[0] = 1;
		for(int i = 1;i <=9;++i){
			fac[i] = fac[i-1] * i;
		}
		ll res = 0;
		int index = 1;
		while(n!= 0){
			int tmp = n%10;
			res += tmp*fac[index];
			index++;
			n/=10;
		}
		cout << res<<"\n";
	}
}