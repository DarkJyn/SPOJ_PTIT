#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	ll a[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	ll suma = 0;
	ll sumb = INT_MIN;
	for(int i = 0;i < n;++i){
		suma += a[i];
		if(sumb < suma){
			sumb = suma;	
		}
		if(suma < 0) suma = 0;
	}
	cout << sumb;
} 