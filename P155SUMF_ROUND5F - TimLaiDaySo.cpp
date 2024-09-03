#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	ll n;cin >> n;
	ll b[n+1];
	ll a[n+1];
	for(int i = 1;i <= n;++i){
		cin >> b[i];
	}
	ll tmp = 0;
	for(int i = 1;i <= n;++i){
		a[i] = b[i] * i - tmp;
		tmp+= a[i];
		cout <<a[i]<<" ";
	}
}	