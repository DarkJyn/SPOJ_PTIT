#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	int n;
	cin >> n;
	int a[n + 5];
	int b[5000] = {};
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		b[a[i]]++;
	}
	for (int i = 1; i < 5000; i++){
		if (b[i] == 0){
			cout << i;
			return 0;
		}
	}	
}