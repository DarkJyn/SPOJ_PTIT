#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int t;cin >> t;
	while (t--) {
		int n;cin >> n;
		int s= 2;
		int a = 1;
		int b = 1;
		while(s<n){
			int c = (a+b)%MOD;
			b = a;
			a = c;
			s++;
		}
		cout << a << "\n";
	}
	return 0;
}