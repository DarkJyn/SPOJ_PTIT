#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int mark[5005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	ll a[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	int l = 0;
	int r = n-1;
	int cnt = 0;
	while(l < r){
		if(a[l] == a[r]){
			l++;
			r--;
		 continue;
		}
		else if(a[l] < a[r]){
			a[l+1] += a[l];
			l++;
			cnt++;
		}
		else if(a[r]<a[l]){
			a[r-1] += a[r];
			r--;
			cnt++;
		}
	}
	cout << cnt;
}
