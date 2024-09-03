#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	string a;
	while(cin >> a){
		int b[27] = {0};
		for(int i = 0;i < a.size();++i){
			b[a[i]-'a']++;
		}
		int cnt = 0;
		for(int i = 0;i <=26;++i){
			if(b[i] % 2 == 1) cnt++;
		}
		if(cnt % 2 == 1 || cnt == 0){
			cout << "First";
		}
		else cout <<"Second";
		cout <<"\n";
	}
}