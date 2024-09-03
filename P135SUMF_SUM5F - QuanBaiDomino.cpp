	#include <bits/stdc++.h>
	using namespace std;
	using ll = long long;

	int main(){
		ll n; cin >> n;
		ll sum = 0;
		for(ll i = 0;i <= n;++i){
			for(int j = i; j <=n;++j){
				sum += i;
				sum +=j;
			}
		}
		cout << sum;
	}
	/*
	0 0
	0 1
	1 0
	1 1
	0 2
	2 0
	2 2
	
	*/