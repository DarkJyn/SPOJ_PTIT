#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	int a[2*n];
	int chan = 0;
	int le = 0;
	for(int i = 0;i < 2*n;++i){
		cin >>a[i];
		if(a[i] == 0 && (i + 1) % 2 == 0) chan++;
		else if(a[i] == 0 && (i+1) % 2 == 1) le++;
	}
	if(chan > le) cout << le;
	else cout << chan;
}