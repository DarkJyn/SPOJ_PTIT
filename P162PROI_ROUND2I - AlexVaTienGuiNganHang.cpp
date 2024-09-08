#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	if(n > 0)cout << n;
	else{
		int tmp = n / 10;
		int res = (n / 100)*10 + n % 10;
		cout << max(tmp,res);
	}
}
