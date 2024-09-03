#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int n,k;
	cin >> n >>k;
	int a[n];
	int cnt = 0;
	for(int i = 0;i < n;++i){
		cin >>a[i];
		if(a[i]>0) cnt++;
	}
	int tmp = a[k-1];
	for(int i = n-1;i >= 0;--i){
		if(a[i] == tmp && a[i] <= 0){
			cout << cnt;
			return 0;
		}
		else if(a[i] == tmp){
			cout << i + 1;
			return 0;
		}
	}
}