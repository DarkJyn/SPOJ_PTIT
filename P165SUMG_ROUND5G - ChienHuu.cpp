#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--){
		int n, a, b;
		cin >> n >> a >> b;
		if (a < b)
			swap(a, b);
		int s = n / a;
		n = n % a;
		while (s >= 0){
			if (n % b == 0){
				s += n / b;
				break;
			}
			else{
				s--;
				n += a;
			}
		}
		if (s == 0) cout << "-1\n";
		else cout << s << endl;
	}
} 