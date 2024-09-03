#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		int n,m,a,b;
		cin >> n >> m >> a >> b;
		int beg = min(n,m);
		int end = max(n,m);
		int cnt = 0;
		for(int i = beg;i<=end;++i){
			if(i%a == 0|| i % b == 0) cnt++;
		}
		cout << cnt<<"\n";
	}
} 