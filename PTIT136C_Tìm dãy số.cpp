#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int n; cin >> n;
	int a[n][n];
	ll sum = 0;
	for(int i = 0;i < n;++i){
		for(int j = 0;j < n;++j){
			cin >> a[i][j];
			sum += a[i][j];
		}
	}
	ll sum1 = sum / (2*(n-1));
	for(int i = 0;i < n;++i){
		ll res = 0;
		for(int j = 0;j < n;++j){
			res += a[i][j];
		}
		cout << (res-sum1)/(n-2)<<" ";
	}
}