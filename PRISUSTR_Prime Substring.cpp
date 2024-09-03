#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int save[100005];
void eratos(){
	save[0] = 1;
	save[1] = 1;
	for(int i = 2;i <= 100;++i){
		if(save[i] == 0){
			for(int j = i*i;j <= 100000;j+=i){
				save[j] = 1;
			}
		}
	}
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	eratos();
	while(1){
		string s;
		cin >> s;
		if(s == "0") return 0;
		int res = 0;
		for(int i = 0;i < s.size();++i){
			int tmp = 0;
			for(int j = i;j < s.size() && j - i < 5;++j){
				tmp = tmp*10 + (s[j]-'0');
				if(save[tmp] == 0){
					res = max(res,tmp);
				}
			}
		}
		cout << res<<"\n";
	}
}
