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
	int a[n + 1], b[n + 1];
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		b[a[i]] = i;
	}
	for (int i = 1; i <= n; i++){
		cout << b[i] << " ";    
    }
}