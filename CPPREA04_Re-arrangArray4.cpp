#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n+1];
		for(int i = 0;i < n;++i){
			cin >> a[i];
		}
		int res[n];
		sort(a,a+n);
		int index = 0;
		for(int i = 0;i < n;i+=2){
			res[i] = a[index++];
		}
		for(int i = 1;i < n;i+=2){
			res[i] = a[index++];
		}
		for(int i = 0;i < n;i++){
			cout << res[i]<<" ";
		}
		cout <<"\n";
	}
} 