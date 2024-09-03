#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int k;cin >> k;
		int a[n];
		int cnt = 0;
		for(int i = 0;i < n;++i){
			cin >> a[i];
		}
		int res = 0;
		int check  = 0;
		for(int i = 0;i < n;++i){
			if(res + a[i] > k){
				cout << cnt;
				check = 1;
				break;
			}
			else{
				res += a[i];
				cnt++;
			}
		}
		if(check == 0) cout << cnt;
		cout <<"\n";
	}
}