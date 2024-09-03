#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;cin >> n;
	string a,b;
	vector<string> v(n);
	for(int i = 0;i < n;++i){
		cin >> v[i];
	}
	a = v[0];
	for(int i = 0;i < n;++i){
		if(v[i] != a){
			b = v[i];
		}
	}
	int cnt = 0;
	int cnt1 = 0;
	for(int i = 0;i < n;++i){
		if(v[i] == a) cnt++;
		else cnt1++;
	}
	if(cnt > cnt1) cout << a;
	else cout << b;
}
