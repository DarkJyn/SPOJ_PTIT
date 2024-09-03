#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	char a[n][n];
	for(int i = 0;i < n;++i){
		for(int j = 0;j < n;++j){
			cin >> a[i][j];
		}
	}
	int res = 0;
	int cnt = 0;
	for(int i = 0;i < n;++i){
		cnt = 0;
		for(int j = 0;j < n;++j){
			if(a[i][j] == 'C') cnt++;
		}
		res = res + cnt*(cnt-1)/2;
	}
	for(int j = 0;j < n;++j){
		cnt = 0;
		for(int i = 0;i < n;++i){
			if(a[i][j] == 'C') cnt++;
		}
		res = res + cnt*(cnt-1)/2;
	}
	cout << res;
}
