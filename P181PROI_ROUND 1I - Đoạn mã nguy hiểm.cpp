#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int n;cin >> n;
	string s; cin >>s;
	int cnt = 0;
	for(int i = 2;i < n;++i){
		if(s[i-2] == '0' && s[i-1] == '1' && s[i] == '0'){
			s[i] = '1';
			cnt++;
		}
	}
	cout << cnt;
}