#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a = 0;
		int tmp = 0;
		if(s.size() == 1){
			if(s=="0") cout << "YES";
			else cout << "NO";
		}
		else{
			
			tmp = (s[s.size() - 2]-'0') * 10 + (s[s.size()-1]-'0');
			for(int i = 0;i < s.size();++i){
				a += s[i] -'0';
			}
			if(a % 9 == 0 && tmp % 4 == 0){
				cout << "YES";
			}
			else cout << "NO";
		}
		cout <<"\n";
	}
} 