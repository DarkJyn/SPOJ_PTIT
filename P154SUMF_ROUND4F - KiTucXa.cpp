#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	int cnt = 0;
	while(n--){
		int p,q;
		cin >> p >> q;
		if(q - p >= 2) cnt++;
	}	
	cout << cnt;
	
}