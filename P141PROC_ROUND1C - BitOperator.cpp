#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	int res = 0;
	while(t--){
		string s;
		cin >> s;
		if(s[0] == 'X'){
			if(s[1] == '+') res++;
			else res--;
		}
		else if(s[0] == '+') res++;
		else res--;
	}
	cout << res;
}
