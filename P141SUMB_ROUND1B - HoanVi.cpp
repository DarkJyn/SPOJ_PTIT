#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mark[5001];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
		mark[a[i]]++;
	}
	int res = 0;
	for(int i = 1;i <=n;++i){
		if(mark[i] == 0) res++;
	}
	cout << res;
}