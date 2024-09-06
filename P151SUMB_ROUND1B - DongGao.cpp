#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int n; cin >> n;
	int val[2] = {5,3};
	int res[n+2] = {};
	for(int i = 1;i <= n;++i){
		res[i] = -1;
	}
	for(int i = 1;i <= n;++i){
		for(int j = 0; j < 2;++j){
			if(val[j] <= i && res[i - val[j]] != -1){
				if(res[i] != -1) res[i] = min(res[i],res[i-val[j]]+1);
				else res[i] = res[i-val[j]]+1;
			}
		}
	}
	cout << res[n];
	return 0;
}