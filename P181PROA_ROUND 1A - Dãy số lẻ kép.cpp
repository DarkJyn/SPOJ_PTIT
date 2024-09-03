#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int n;cin >> n;
	int a[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];		
	}
	if(n % 2 == 0){
		cout <<"no";
		return 0;
	}
	else{
		if(a[0] % 2 == 0 || a[n-1] % 2 == 0){
			cout <<"no";
		}
		else cout <<"yes";
	}
}