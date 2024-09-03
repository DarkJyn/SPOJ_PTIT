#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
string solve(ll a){
	string s = "";
	while(a != 0){
		s = (char)(a % 2 +'0')+ s;
		a /= 2;
	}
	return s;	
}
int main(){
	int t;cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll cnt = pow(2,n);
		for(ll i = 0;i < cnt;++i){
			string tmp = solve(i);
			while(tmp.size()<n){
				tmp = "0" + tmp;
			}
			cout << tmp <<" ";
		}
		cout <<"\n";
	}
}