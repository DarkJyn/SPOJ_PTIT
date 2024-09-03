#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
bool cmp(string a, string b){
    if (a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}
int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int t;cin >> t;
	vector <string> s;
	while(t--){
		string a;cin >> a;
		string tmp = "";
		int ok = 0;
		for(int i = 0;i < a.size();++i){
			if(isdigit(a[i])){
				tmp = tmp + a[i];
				while(tmp[0] == '0'){
					if(tmp.size() == 1) break;
					tmp.erase(0,1);
				}
				if(i == a.size() -1){
					s.push_back(tmp);
				}
				ok = 1;
			}
			else if(ok == 1){
				s.push_back(tmp);
				tmp = "";
				ok = 0;
			}
		}
	}
	sort(s.begin(),s.end(),cmp);
	for(auto& x : s){
		cout << x <<"\n";
	}
	return 0;
}