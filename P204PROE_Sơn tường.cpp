#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	char a[n][m];
	int check = 0;
	int res = 0;
	int ok = 0;
	int tmp = 0;
	for(int i = 0;i < n;++i){
		for(int j = 0;j < m;++j){
			cin >> a[i][j];
			if(a[i][j] == 'B' && ok == 0){
				ok = 1;
				res = i;
				tmp = j;
			}
		}
	}
	int cnt = 0;
	for(int i = 0;i < n;++i){
		for(int j = 0;j < m;++j){
			if(a[i][j] == 'B'){
				cnt++;
				check = 1;
			}
		}
		if(check == 1) {
			break;
		}
	}
	cout << 1+res+cnt/2 <<" "<< 1+tmp+cnt/2;
} 