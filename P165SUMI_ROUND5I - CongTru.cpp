#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	ll n;cin >> n;
	if(n % 2 == 0){
		ll tmp = (n+2)*(((n-2)/2)+1)/2;
		ll res = n*(((n-2)/2)+1)/2;
		cout << tmp - res;
	}
	else{
		ll tmp = (n+1)*(((n-1)/2)+1)/2;
		ll res = (n+1)*(((n-3)/2)+1)/2;
		cout << res - tmp;
	}
}