#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int test = 1;
	while(test > 0){
		int a[5];
		for(int i = 0; i < 4;++i){
			cin >> a[i];
		}
		if(a[0] == a[1] && a[1] == a[2]&&a[3]==a[0] && a[0] == 0) break;
		int res = 0;
		while(1){
			int cnt = 0;
			for(int i = 0; i < 3;++i){
				if(a[i] == a[i+1]) cnt++;
				else break;
			}
			if(cnt == 3) break;
			else res++;
			a[4] = a[0];
			for(int i = 0; i < 4;++i){
				
				a[i] = abs(a[i] - a[i + 1]);

			}
		}
		cout << res;
		cout << "\n";
	}
}
