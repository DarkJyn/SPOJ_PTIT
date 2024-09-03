#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	char a[6][6];
	for(int i = 1; i <= 4;++i){
		for(int j  = 1; j <= 4;++j){
			cin >> a[i][j];
		}
	}
	int check = 0;
	for(int i = 1; i <= 4;++i){
		for(int j  = 1; j <= 4;++j){
			if(a[i][j] == '#'){
				if((a[i-1][j] == '#'|| a[i+1][j] == '#') && (a[i][j+1] == '#' || a[i][j-1] == '#')) check = 1;
			}
			if(a[i][j] == '.'){
				if((a[i-1][j] == '.'|| a[i+1][j] == '.') && (a[i][j+1] == '.' || a[i][j-1] == '.')) check = 1;
			}
		}
	}
	if(check == 1) cout << "YES";
	else cout << "NO";
}
