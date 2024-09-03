#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		int cnt = 0;
		for(int i = 0;i < n;++i){
			cin >> a[i];
			if(a[i] <= k) cnt++;
		}
		int slide[cnt];
		int res = 0;
		for(int i = 0;i < cnt;++i){
			if(a[i]>k) res++;
		}
		int tmp = 10000000;
		tmp = min(res,tmp);
		for(int i = 0;i < n - cnt;++i){
			if(a[i] > k) res--;
			if(a[i+cnt] > k) res++;
			tmp = min(res,tmp);
		}
		cout << tmp <<"\n";;
	}
}
