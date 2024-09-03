#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int save[1005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	int a[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
		save[a[i]]++;
	}
	int store = n;
	int res = 0;
	while(store != 0){
		set <int> s;
		for(int i = 1;i <= 1000;++i){
			if(save[i] > 0){
				save[i]--;
				s.insert(i);
				store--;
			}
		}
		res = res + s.size() -1;
	}
	cout << res;
}
