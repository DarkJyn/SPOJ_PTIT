#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	if(m < n) cout << n - m;
	else{
		int cnt = 0;
		while(n < m){
			if(m % 2 == 1) m++;
			else m /= 2;
			cnt++;
		}
		cnt += n - m;
		cout << cnt;
	}
}