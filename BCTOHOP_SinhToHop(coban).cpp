#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
#define endl "\n"

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int n,k;
	cin >> n >> k;
	int a[n + 2];
	for(int i = 0;i < n;++i){
		a[i] = i + 1;
	}
	while(1){
		for(int i = 0;i < k;++i){
			cout << a[i] <<" ";
		}
		cout << endl;
		int idx = k-1;
		while(idx >= 0 && a[idx] == n + idx - k + 1){
			idx--;
		}
		if(idx < 0) break;
		a[idx]++;
		for(int i = idx+1;i<k;++i){
			a[i] = a[i-1] + 1;
		}
	}
}