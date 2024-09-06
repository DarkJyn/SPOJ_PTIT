#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int r,c,a,b;
	cin >> r >> c >> a >> b;
	char arr[r][c];
	for(int i = 0;i < r;++i){
		for(int j = 0;j < c;++j	){
			cin >> arr[i][j];
		}
	}
	for(int i = 0;i < r;++i){
		for(int m = 1;m <=a;++m){
			for(int j = 0;j < c;++j){
				for(int k = 1;k <=b;++k)
					cout << arr[i][j];
			}
			cout <<"\n";
		}
		
	}
	return 0;
}