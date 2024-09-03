#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
int dp[40005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n,s;
	cin >> n >> s;
	int a[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	dp[0] = 1;
	for(int i = 0;i < n;++i){
		for(int j = s;j >= a[i];--j){
			if(dp[j - a[i]] == 1) dp[j] = 1;
		}
	}	
	if(dp[s] == 1) cout <<"YES";
	else cout <<"NO";
}
