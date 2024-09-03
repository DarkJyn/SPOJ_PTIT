#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n];
		int cntc = 0;
		int cntl = 0;
		int sum = 0;
		for(int i = 0;i < n;++i){
			cin >> a[i];
			sum += a[i];
			if(a[i] % 2 == 0) cntc++;
			else cntl++;
		}
		if(sum % 2 == 1){
			cout <<"YES";
		}
		else{
			if(cntl == 0 || cntc == 0){
				cout <<"NO";
			}
			else cout <<"YES";
		}
		cout <<"\n";
	}
}
