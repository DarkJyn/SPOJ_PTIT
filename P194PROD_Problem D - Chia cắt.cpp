#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	int a[n];
	int idxmin = 0;
	int idxmax = 0;
	for(int i = 0;i < n;++i){
		cin >> a[i];
		if(a[i] == 1) idxmin = i;
		if(a[i] == n) idxmax = i;
	}
	if(n == 0 || n == 1) cout << "0";
	else if(n == 2) cout <<"1";
	else if(n == 3) cout << "2";
	else{
		if(idxmin < idxmax){
			if(idxmin > n - idxmax - 1){
				cout << idxmax;
			}
			else cout << n - 1 - idxmin;
		}
		else{
			if(idxmax > n - idxmin - 1){
				cout << idxmin;
			}
			else cout << n - 1 - idxmax;
		}
	}
}