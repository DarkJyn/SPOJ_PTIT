#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int m,n,k;
	cin >> m >> n >> k;
	int res = 0;
	for(int i = 0;i <= k;++i){
		int j = k-i;
		m -=i;
		n -=j;
		if(m>=2*n&&n>res){
			res = n;
		}
		else if(m<2*n&&m/2>res){
			res = m /2;
		}
		m+=i;
		n+=j;
	}
	cout << res;
}