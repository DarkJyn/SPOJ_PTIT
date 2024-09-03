#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int LCS(string a, string b){
	int lengtha = a.size();
	int lengthb = b.size();
	int n = max(lengtha,lengthb);
	int F[n+1][n+1];
	for(int i = 0;i <= n;++i){
		for(int j = 0;j <= n;++j){
			F[i][j] = 0;
		}
	}
	for(int i = 0;i < lengtha;++i){
		for(int j = 0;j < lengthb;++j){
			if(a[i] == b[j]){
				F[i+1][j+1] = F[i][j] + 1;
			}
			else F[i+1][j+1] = max(F[i][j+1],F[i+1][j]);
		}
	}
	return F[lengtha][lengthb];
}
int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		vector<string> v;
		string tmp;
		for(int i = 0;i < n;++i){
			cin >> tmp;
			v.push_back(tmp);
		}
		int res = 0;
		for(int i = 0;i < n-1;++i){
			for(int j = i + 1;j < n;++j){
				res = max(res,LCS(v[i],v[j]));
			}
		}
		cout << res<<"\n";
	}
}
