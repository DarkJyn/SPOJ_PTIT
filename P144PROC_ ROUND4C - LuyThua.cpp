#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
long long fac(long long n,long long k){
	if(k == 0) return 1;
	if(k % 2 == 0){
		long long m=fac(n,k/2);
		return (m*m)%MOD;
	}
	else{
		long long m=fac(n,k-1);
		return (n*m)%MOD;
	}
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	while(1){
		ll x,y;
		cin >> x >> y;
		if (x==0 && y == 0) return 0;
		cout << fac(x,y) <<"\n";
	}
}