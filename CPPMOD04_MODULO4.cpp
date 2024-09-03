#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		ll tmp = n % k;
		tmp = tmp*(tmp+1)/2;
		if(k == tmp+ k*(k-1)/2*(n/k)) cout <<"1";
		else cout <<"0";
		cout << "\n";
	}	
	return 0;
}