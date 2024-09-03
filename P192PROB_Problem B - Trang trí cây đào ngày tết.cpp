#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int mark[5005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a,b,c;
	cin >> a >> b >> c;
	if( a >= c - 2 && b >= c-1){
		cout << c *3 -3;
	}
	else if( a >= b - 1 && c >= b+1){
		cout << b*3;
	}
	else if( b >= a + 1 && c >= a + 2){
		cout << 3* a + 3;
	}
}
