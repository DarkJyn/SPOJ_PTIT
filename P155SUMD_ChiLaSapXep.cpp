#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mark[100005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll n,m;cin >> n >> m;
	ll a[n+10];
	ll b[m+5];
	for(ll i = 0;i < n;++i){
		cin >> a[i];
	}
	ll max = 0;
	for(ll i = 0;i < m;++i){
		cin >> b[i];
		if(b[i]>max) max = b[i];
	}
	sort(a,a+n);
	ll index = 0;
	ll cnt = 1;
	for(ll i = 0;i <= max;++i){
		if(i!=0) mark[i] = mark[i-1];
		while(i == a[index]){
			mark[i] = cnt;
			cnt++;
			index++;
		}
	}
	for(ll i = 0;i < m;++i){
		cout  << mark[b[i]] <<"\n";
	}
}