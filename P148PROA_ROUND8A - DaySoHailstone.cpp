#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int test = 1;
	while(test > 0){
		int n;
		cin >>n;
		if( n == 0) return 0;
		if( n == 1) cout << "1\n";
		else{
			int cnt = 1;
			while(n!=1){
				if(n % 2 == 0){
					cnt++;
					n /= 2;
				}
				else{
					cnt++;
					n = n*3 + 1;
				}
			}
			cout << cnt<<"\n";
		}
	}
}
