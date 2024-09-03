#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	long long l, r, x;
	cin >> l >> r >> x;
	long long b = x, s = 1;
	int ok = 0;
	if (s >= l && s <= r){
		cout << s << " ";
		ok = 1;
	}
	if (b >= l && b <= r){
		cout << b << " ";
		ok = 1;
	}
	if (b <= r){
		s = b;
		while ((r / s) >= b){
			x = x * b;
			s = x;
			if (s >= l && s <= r){
				cout << s << " ";
				ok = 1;
			}
		}
	}
	if (ok == 0) cout << "-1";
}