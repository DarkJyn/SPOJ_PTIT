#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n+1];
		for(int i = 0;i < n;++i){
			a[i] = i+1;
		}
		do{
			for(int i = 0;i < n;++i){
				cout << a[i];
			}
			cout <<" ";
		}while(next_permutation(a,a+n));
		cout << "\n";
	}
}