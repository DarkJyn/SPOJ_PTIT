#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int r,c;cin >> r >> c;
	int a,b;cin >> a >> b;
	char arr[r][c];
	int ok = 1;
	for(int i = 0;i < r;++i){
		if(i % 2 == 0) ok = 0;
		else ok = 1;
		for(int j = 0;j < c;++j){
			if(ok % 2 == 0) {
				arr[i][j] = 'X';
				ok++;
			}
			else{
				arr[i][j] = '.';
				ok++;
			}
		}
	}
	for(int i = 0;i < r;++i){
		for(int k = 0;k < a;++k){
			for(int j = 0; j < c;++j){
				for(int t = 0;t < b;++t){
					cout << arr[i][j];
				}
			}
			cout << "\n";
		}
	}
}