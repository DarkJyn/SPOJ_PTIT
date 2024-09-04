#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct guest{
	int gio;
	int phut;
};
bool cmp(guest a, guest b){
	if(a.gio == b.gio) return a.phut < b.phut;
	return a.gio < b.gio;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	guest list[n];
	for(int i = 0; i < n;++i){
		cin >> list[i].gio >> list[i].phut;
	}
	sort(list,list + n,cmp);
	int cnt = 1;
	int res = 0;
	for(int i = 0;i < n;++i){
		if(list[i].gio == list[i+1].gio && list[i].phut == list[i+1].phut){
			cnt++;
			res = max(res ,cnt);
		}
		else cnt = 1;
	}
	if( res == 0) cout <<"1";
	else cout << res;
	
}