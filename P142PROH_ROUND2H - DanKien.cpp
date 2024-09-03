#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int r,c;
int col[11];
int row[11];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> r >> c;
	char a[r][c];
	int cnt = 0;
	for(int i = 0;i < r;++i){
		cnt = 0;
		for(int j = 0;j < c;++j){
			cin >> a[i][j];
			if(a[i][j] == 'S'){
				cnt++;
				col[j]++;
			}
		}
		row[i] = cnt;
	}
	int res = 0;int check = 0;
	for(int i = 0;i < r;++i){
		if(row[i] == 0) {
			res += c;
			check++;
		}
	}
	for(int i = 0;i < c;++i){
		if(col[i] == 0) {
			res += r;
			res = res - check;
		}
	}
	cout << res;
} 