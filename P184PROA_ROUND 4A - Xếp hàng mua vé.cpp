#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int n,a,b;
	cin >> n >> a >>b;
	int cnt = 0;
	for(int i = 1;i<=n;++i){
		if(i-1>=a && n - i <= b) cnt++;
	}
	cout << cnt;
}
