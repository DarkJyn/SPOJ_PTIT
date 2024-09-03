#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t; cin >> t;	
	while(t--){
		int test;
		ll n;
		cin >> test >> n;
		ll tmp = 2*n;
		int cnt = 0;
		for(int i = 2; i * i <= tmp;++i){
			if(tmp%i == 0 && ((tmp / i)-i) & 1) cnt++;
		}
		cout << test <<" "<<cnt<<"\n";
	}
}