#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
#define fi first
#define se second

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	int v[n+4];
	int w[n+4];
	for(int i = 1;i<=n;++i){
		cin >> w[i] >> v[i];
	}
	int dp[n + 5][m+5];
	memset(dp,0,sizeof(dp));
	for(int i = 1; i <= n;++i){
		for(int j = 1; j <= m;++j){
			dp[i][j] = dp[i - 1][j];
			if(j >= w[i]){
				dp[i][j] = max(dp[i][j],dp[i-1][j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[n][m];
}
