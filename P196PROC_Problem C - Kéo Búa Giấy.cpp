#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
	string s1;cin >> s1;
	string s2;cin >> s2;
	for(int i = 0;i < n;++i){
		if(s1[i] == 'K' && s2[i] == 'K') cout <<"B";
		else if(s1[i] == 'B' && s2[i] == 'K') cout <<"B";
		else if(s1[i] == 'G' && s2[i] == 'K') cout <<"K";
		else if(s1[i] == 'K' && s2[i] == 'B') cout <<"B";
		else if(s1[i] == 'B' && s2[i] == 'B') cout <<"G";
		else if(s1[i] == 'G' && s2[i] == 'B') cout <<"G";
		else if(s1[i] == 'K' && s2[i] == 'G') cout <<"K";
		else if(s1[i] == 'B' && s2[i] == 'G') cout <<"G";
		else if(s1[i] == 'G' && s2[i] == 'G') cout <<"K";
	}
} 