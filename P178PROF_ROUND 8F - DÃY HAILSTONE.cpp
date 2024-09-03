#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int mark[5005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	while(1){
		int n;cin >> n;
		if ( n == 0) return 0;
		int cnt = 1;
		while(n!= 1){
			cnt++;
			if(n % 2 == 0){
				n /= 2;
			}
			else n = n*3 + 1;
		}
		cout << cnt<<"\n";
	}
}
