#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	if(a + b + c+ d + e == 0){
		cout <<"-1";
		return 0;
	}
	if((a + b + c + d + e) % 5 == 0){
		cout << (a + b + c + d + e) / 5;
	}
	else cout << "-1";
}