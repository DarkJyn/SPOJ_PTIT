#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
	int a[n+5];
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	int tmp = n;
	int cnt = 0;
	for(int i = n - 1;i >= 0;i--){
		if(a[i] == tmp ){
			tmp--;
		}
		else cnt++;
	}
	cout << cnt;
}