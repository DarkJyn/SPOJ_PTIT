#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		string a,b,c;
		int cnt[10] = {};
		cin >> a >> b >> c;
		for(int i = 0;i < a.size();++i){
			cnt[a[i]-'0']++;
		}
		for(int i = 0;i < b.size();++i){
			cnt[b[i]-'0']++;
		}
		for(int i = 0;i < c.size();++i){
			cnt[c[i]-'0']++;
		}
		for(int i = 9;i>=0;--i){
			for(int j = 0;j < cnt[i];++j){
				cout <<i;
			}
		}
		cout<<"\n";
	}
}
