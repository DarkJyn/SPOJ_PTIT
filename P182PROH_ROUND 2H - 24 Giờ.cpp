#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	string s;cin >> s;
	if(s[s.size()-2] == 'A'){
		if(s[0] == '1' && s[1] == '2'){
			s[0] -= 1;
			s[1] -= 2;
			for(int i = 0;i < s.size()-2;++i){
				cout<<s[i];
			}
		}
		else{
			for(int i = 0;i < s.size()-2;++i){
				cout<<s[i];
			}
		}
	}
	else if(s[s.size()-2] == 'P' && s[0] == '1' && s[1] == '2'){
		for(int i = 0;i < s.size()-2;++i){
			cout << s[i];
		}
	}	
	else{
		int res = 0;
		s[1] = s[1] + 2;
		if((s[1] - '0')>= 10){
			s[1] -= 10;
			res = 1;
		}
		s[0] = s[0]+res+1;
		for(int i = 0;i < s.size()-2;++i){
			cout << s[i];
		}
	}
}