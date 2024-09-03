#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		ll n;cin >> n;
		ll s = 0;
		for(int i = 1;i <= sqrt(n);++i){
			if(n % i == 0) s = s + i + n /i;
			
		}
		if(sqrt(n)  == (float)sqrt(n)) s= s - sqrt(n);
		ll tmp = 0;
		for(int i  = 1;i <= sqrt(s);++i){
			if(s % i == 0) tmp+= i + s / i; 
		}
		if(sqrt(s) == (float)sqrt(s)) tmp = tmp -sqrt(s);
		if( tmp  == 2*n) cout << "YES";
		else cout <<"NO";
		cout <<"\n";
	}
}
