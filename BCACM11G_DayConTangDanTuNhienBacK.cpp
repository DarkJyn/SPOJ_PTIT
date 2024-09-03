#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int ans;
int n,k;
int a[105];
void solve(int beginpos,int size){
	if(size == k){
		ans++;
		return;
	}
	else{
		for(int i = beginpos + 1;i <= n;++i){
			if(a[i] > a[beginpos]) solve(i,size+1);
		}
	}
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ans = 0;
		a[0] = -1;
		for(int i = 1;i <= n;++i){
			cin >> a[i];
		}
		solve(0,0);
		cout << ans<< "\n";
	}
}