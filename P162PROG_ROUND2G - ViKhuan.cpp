#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int cnt = 1;
	int x;cin >>x;
	while(x != 1){
		if( x % 2 == 1){
			x--;
			cnt++;
		}
		x/= 2;
	}
	cout << cnt;
}