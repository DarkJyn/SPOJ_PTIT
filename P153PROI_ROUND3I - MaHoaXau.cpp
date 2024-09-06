#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int t ; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string tmp = "";
		transform(s.begin(),s.end(),s.begin(),::tolower);
		int mark[27] = {};
		for(int i = 0;i < s.size();++i){
			if(s[i] != ' ') mark[s[i] - 'a']++;
		}
		int sum = 0;
		for(int i = 0;i < s.size();++i){
			if(mark[s[i] - 'a'] > 0 && s[i] != ' '){
				if(mark[s[i] - 'a'] > 1) sum+= mark[s[i] - 'a'];
				tmp = tmp + s[i];
				mark[s[i] - 'a'] = 0;
			}
		}
		cout << sum << " "<< tmp<<"\n";
	}
	return 0;
}