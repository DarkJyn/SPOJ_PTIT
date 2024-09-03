#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
	int t = 1;
	while( t > 0){
		int n,m;
		cin >> n >> m;
		if(n == 0 && m == 0) return 0;
		char a[n+2][m+2];
		for(int i = 0; i < n;++i){
			for(int j = 0;j < m;++j){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n;++i){
			for(int j = 0;j < m;++j){
				if(a[i][j] == '.'){
					int cnt = 0;
					if(a[i+1][j] == '*'&&i<=n-2) cnt++;
					if(a[i-1][j] == '*'&&i>=1) cnt++;
					if(a[i][j+1] == '*'&&j<=m-2) cnt++;
					if(a[i][j-1] == '*'&&j>=1) cnt++;
					if(a[i+1][j+1] == '*'&& j<=m-2 &&i<=n-2) cnt++;
					if(a[i-1][j+1] == '*'&&i>=1&&j<=m-2) cnt++;
					if(a[i+1][j-1] == '*'&&j>=1&&i<=n-2) cnt++;
					if(a[i-1][j-1] == '*'&&i>=1&&j>=1) cnt++;
					a[i][j] = (char)cnt +48;
				}
			}
		}
		for(int i = 0; i < n;++i){
			for(int j = 0;j < m;++j){
				cout << a[i][j];
			}
			cout << "\n";
		}
	}
}