#include <bits/stdc++.h>
using namespace std;
int check(string s){
	if(s[0]!= '1') return 0;
	for(int i = 0; i < s.size();++i){
		if(s[i] != '1' && s[i] != '4') return 0;
	}
	int cnt = 0;
	for(int i = 0; i < s.size();++i){
		
		if(s[i] == '4'){
			cnt++;
		}
		if(cnt == 3) return 0;
		if(s[i]!= '4') cnt = 0;
	}
	return 1;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
	cin >> s;
	if(check(s)) cout << "YES";
	else cout << "NO";
}