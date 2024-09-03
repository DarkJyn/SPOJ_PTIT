#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int a[9] = {500,200,100,50,20,10,5,2,1};
	int res[10005];
	for(int i = 1;i <= 10000;++i){
		res[i] = -1;
	}
	for(int i = 1;i <= 10000;++i){
		for(int j = 0;j < 9;++j){
			if(a[j] <= i&& res[i - a[j]] != -1){
				if(res[i] != -1){
					res[i] = min(res[i],res[i-a[j]]+1);
				}
				else{
					res[i] = res[i-a[j]]+1;
				}
			}
		}
	}
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		cout << res[n]<<"\n";
	}
	return 0;
}