#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	while(1){
		string n;	
		cin >> n;
		if(n == "0") return 0;
		int res = 0;
		for(int i = 0;i < n.size();++i ){
			int tmp = n[i] - '0';
			if(tmp > 4) tmp--;
			res = res*9+tmp;
		}
		cout << n <<": "<<res<<"\n";
	}
}
