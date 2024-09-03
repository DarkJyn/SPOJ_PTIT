#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string s;
	cin >> s;
	int beg = 0;
	int end = 0;
	int res = 0;
	int mark[s.size()+5];
	mark[0] = 0;
	for(int i = 0;i < s.size()-1;++i){
		if(s[i] == '(' && s[i+1]=='(') beg++;
		mark[i+1] = beg;
	}
	for(int i = s.size()-1;i > 0;i--){
		if(s[i] == ')' && s[i-1]==')'){
			res += mark[i-1];
		}
	}
	cout << res;
}
