#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n];
		int b[n];
		for(int i = 0;i < n;++i){
			cin >> a[i];
		}
		for(int i = 0;i < n;++i){
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		int check = 0;
		for(int i = 0;i < n;++i){
			if(b[i]>a[i]){
				check=1;
				break;
			}
		}
		if(check == 1){
			for(int j = 0;j < n;++j){
				if(a[j]>b[j]){
					check = 0;
					break;
				}
			}
			if(check == 0){
				cout << "NO\n";
			}
			else cout <<"YES\n";
		}
		else cout <<"YES\n";
	} 
} 