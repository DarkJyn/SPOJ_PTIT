#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int index;cin >> index;
	int n;cin >> n;
	int s = 0;
	while(n--){
		int t;cin >> t;
		char c;cin >> c;
		s += t;
		if(s > 210){
			cout << index;
			return 0;
		}
		else{
			if(c == 'P'||c=='N'){
				continue;
			}
			else{
				index++;
				if(index == 9) index = 1;
			}
		}
	}
}