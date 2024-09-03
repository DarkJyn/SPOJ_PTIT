#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int test = 1;
	while(test > 0){
		int n;
		cin >> n;
		if(n == 0) return 0;
		int a[n+2];
		for(int i = 0; i < n;++i){
			cin >> a[i];
		}
		int res = 0;
		while(1){
			int cnt = 0;
			for(int i = 0; i < n-1;++i){
				if(a[i] == a[i+1]) cnt++;
				else break;
			}
			if(cnt == n -1 || res == 1000) break;
			else res++;
			a[n] = a[0];
			for(int i = 0; i < n;++i){
				
				a[i] = abs(a[i] - a[i + 1]);

			}
		}
		if(res == 1000){
			cout << "Case " << test<<": not attained";
		}
		else cout << "Case "<<test<<": "<<res<< " iterations";
		test++;
		cout << "\n";
	}
}
