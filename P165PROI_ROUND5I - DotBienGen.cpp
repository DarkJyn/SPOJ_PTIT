#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	string s;cin >> s;
	s = " "+s;
	int soltoa[n+1] = {};
	int soltob[n+1] = {};
	for(int i = 1;i <= n;++i){
		if(s[i] == 'A'){
			soltoa[i] = soltoa[i-1];
			soltob[i] = min(soltoa[i-1]+1,soltob[i-1]+1);
		}
		else{
			soltob[i] = soltob[i-1];
			soltoa[i] = min(soltoa[i-1]+1,soltob[i-1]+1);
		}
	}
	cout << min(soltoa[n],soltob[n]+1);
} 