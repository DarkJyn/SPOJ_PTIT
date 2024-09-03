#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll sumofd(ll a){
	ll res = 0;
	while(a != 0){
		res += a % 10;
		a /= 10;
	}
	return res;
}
int main(){
	string s;cin >> s;
	ll tmp = 0;
	int cnt = 0;
	for(int i = 0;i < s.length();++i){
		tmp += (s[i]-'0');
	}
	if(s.size() != 1 ) cnt = 1;
	while(tmp >= 10){
		tmp = sumofd(tmp);
		cnt++;
	}
	cout << cnt;
}
