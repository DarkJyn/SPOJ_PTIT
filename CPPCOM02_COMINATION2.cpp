#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[k+1];
		for(int i = 1;i <= k;++i){
			a[i] = i;
		}
		while(1){
			for(int i = 1;i<=k;++i){
				cout <<a[i];
			}
			int index = k;
			cout <<" ";
			while(a[index] == n - k + index){
				index--;
				if(index == 0) break;
			}
			if(index == 0) break;
			else a[index]++;
			int tmp = a[index];
			while(index <= k){
				a[index] = tmp;
				index++;
				tmp++;
			}
		}
		cout <<"\n";
	}
}
