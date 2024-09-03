#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int t;cin >> t;
	int cnt = 0;
	while(t--){
		int s = 0;
		for(int i = 0;i < 3;++i){
			int x;cin >> x;
			if(x==1) s++;
		}
		if(s > 1) cnt++;
	}
	cout << cnt;
}