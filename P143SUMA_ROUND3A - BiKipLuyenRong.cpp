#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007;
struct enemy{
	int stats;
	int reward;
};
bool cmp(enemy a,enemy b){
	if(a.stats == b.stats) return a.reward > b.reward;
	return a.stats < b.stats;
}
int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int s,n;
	cin >> s >> n;
	enemy list[n];
	for(int i = 0;i < n;++i){
		cin >> list[i].stats >> list[i].reward;
	}
	sort(list,list+n,cmp);
	for(int i = 0;i < n;++i){
		if(s <= list[i].stats){
			cout <<"NO";
			return 0;
		}
		else{
			s += list[i].reward; 
		}
	}
	cout << "YES";
	return 0;
}