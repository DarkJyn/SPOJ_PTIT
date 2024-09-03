#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> v(300);
int save[300];
void solve(int n){
	save[n] = 1;
	for(int i : v[n]){
		if(save[i] == 0) solve(i);
	}
}
int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;++i){
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	solve(1);
	int check = 0;
	for(int i = 1;i <= n;++i){
		if(save[i]==0){
			check++;
			cout << i <<"\n";
		}
	}
	if(check == 0) cout <<"0";
}