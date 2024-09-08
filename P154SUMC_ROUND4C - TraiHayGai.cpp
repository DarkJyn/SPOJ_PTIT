#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	string s;cin >> s;
	set<char>  st;
	for(int i = 0;i < s.size();++i){
		st.insert(s[i]);
	}
	if(st.size()%2 == 0){
		cout <<"CHAT WITH HER!";
	}
	else cout <<"IGNORE HIM!";
}