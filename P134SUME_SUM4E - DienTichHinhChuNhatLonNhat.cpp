#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a[4];
	for(int i = 0;i < 4;++i){
		cin >> a[i];
	}
	sort(a,a+4);
	cout << a[0]*a[2];
}