#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int mark[5005];
struct team{
	string name;
	int score;
};
bool cmp(team a, team b){
	if(a.score ==  b.score) return a.name < b.name;
	return a.score > b.score;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		int n;
		cin >> n;
		string te;
		cin >> te;
		string opp;
		cin >> opp;
		team list[n];
		int a,b;
		for(int i = 0;i < n;++i){
			cin >> list[i].name >> list[i].score;
			if(list[i].name == te) a = i;
			if(list[i].name == opp) b = i;
		}
		list[a].score += 3;
		sort(list,list+n,cmp);
		for(int i= 0;i < n;++i){
			if(list[i].name == te) {
				a = i;
				cout << i + 1<<" ";
			}
			if(list[i].name == opp) b = i;
		}
		list[a].score -= 3;
		list[b].score += 3;
		sort(list,list+n,cmp);
		for(int i= 0;i < n;++i){
			if(list[i].name == te) {
				a = i;
				cout << i + 1<<" ";
			}
			if(list[i].name == opp) b = i;
		}
		list[a].score += 1;
		list[b].score -= 2;
		sort(list,list+n,cmp);
		for(int i= 0;i < n;++i){
			if(list[i].name == te) {
				cout << i + 1;
				break;
			}
		}
		cout << "\n";
	}
}
