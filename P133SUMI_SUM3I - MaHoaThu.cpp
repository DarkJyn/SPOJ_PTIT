#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string s;cin >> s;
	int r,c;
	for(int i = sqrt(s.size()) ;i>=1;--i){
		if(s.size() % i == 0){
			r = i;
			break;
		}  
	}
	for(int i = 0;i < r;++i){
		for(int j = i;j < s.size();j+=r){
			cout <<s[j];
		}
	}
}
