#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr) -> sync_with_stdio(false);
	int l,r;
	cin >> l >> r;
	int a[r+5];
	int cnt = 0;
	for(int i = 1;i <= r;++i){
		a[i] = 0;
	}
	for(int i = 1;i <= r;++i){
		for(int j = 1; j <= r/i;++j){
			a[i*j]+=i;
		}
	}
	for(int i = l; i <= r;++i){
		if(a[i]-i>i) cnt++;
	}
	cout << cnt;
}