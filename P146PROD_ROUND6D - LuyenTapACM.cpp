#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	int cnt = 0;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		int res = 0;
		if(a == 1) res++;
		if(b == 1) res++;
		if(c == 1) res++;
		if( res >= 2) cnt++;
	}
	cout << cnt;
}
