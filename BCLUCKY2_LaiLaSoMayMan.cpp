#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	int a = -1;
	int b = -1;
	int length = n / 4;
	for(int i = 0;i <= length;++i){
		if((n-4*i)/7 == (float)(n-4*i)/7){
			a = i;
			b = (n-4*i)/7;
			break;
		}
	}
	if( a == -1 && b == -1) cout << "-1";
	else{
		for(int i = 0; i < a;++i){
			cout <<"4";
		}
		for(int j = 0;j < b;++j){
			cout <<"7";
		}
	}
}