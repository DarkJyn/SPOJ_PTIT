#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,m;
		cin >> n;
        int lens = sqrt(n);
		for(int i = 2 ; i <= lens; ++i){
			while(n % i == 0){
				n /= i;
				m = i;
			}
		}
		if( n > 1) m = n;
		cout << m << "\n";
	}
}