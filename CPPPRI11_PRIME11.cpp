#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(n == 6 || n == 28 || n == 496 || n == 8128 || n == 33550336 || n == 8589869056 || n == 137438691328) cout << "1\n";
		else cout <<"0\n";
	}
}