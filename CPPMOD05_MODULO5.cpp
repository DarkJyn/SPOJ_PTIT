#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		string n;
		cin >> n;
		ll m; cin >> m;
		ll tmp = 0;
		for(int i = 0;i < n.size();++i){
			tmp = (tmp * 10 + n[i] - '0')%m;
		}
		cout << tmp <<"\n";
	}	
	return 0;
}