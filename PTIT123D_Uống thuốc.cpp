#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
long long c(int n, int k){
	long long ans = 1;
	for (int i = 1; i <= k; i++, n--)
		ans = ans * n / i;
	return ans;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	while (1){
		int n;
		cin >> n;
		if (n == 0)
			break;
		cout << c(2 * n, n) / (n + 1) <<"\n";
	}
}