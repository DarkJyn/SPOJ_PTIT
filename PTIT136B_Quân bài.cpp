#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int r,c;
	cin >> r >> c;
	char a[r][c];
	for(int i = 0;i < r ;++i){
		for(int j = 0;j < c;++j){
			cin >> a[i][j];
		}
	}
	int x,y;cin >> x >> y;
	char tmp [2*r+2][2*c+2];
	int index1 = 0;
	int index2 = 0;
	for(int i = 0;i < r;++i){
		for(int j = 0;j < c;++j){
			tmp[index1][index2] = a[i][j];
			index2++;
		}
		for(int j = c-1;j >= 0;--j){
			tmp[index1][index2] = a[i][j];
			index2++;
		}
		index2 = 0;
		index1++;
	}
	for(int i = r-1;i >= 0;--i){
		
		for(int j = 0;j < c;++j){
			tmp[index1][index2] = a[i][j];
			index2++;
		}
		for(int j = c-1;j >= 0;--j){
			tmp[index1][index2] = a[i][j];
			index2++;
		}
		index2 = 0;
		index1++;
	}
	if(tmp[x-1][y-1] == '#') tmp[x-1][y-1] = '.';
	else  tmp[x-1][y-1] = '#';
	for(int i = 0;i < 2*r;++i){
		for(int j = 0;j < 2*c;++j){
			cout << tmp[i][j];
		}
		cout <<"\n";
	}
} 