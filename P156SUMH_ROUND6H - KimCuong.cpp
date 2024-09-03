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
	int k1 = (n - 1) / 2;
    int k2 = 1;
	vector<string> a((n + 1) / 2);
	for (int i = 0; i < (n + 1) / 2; i++){
		a[i].insert(a[i].size(), k1, '*');
		a[i].insert(a[i].size(), k2, 'D');
		a[i].insert(a[i].size(), k1, '*');
		k1 -= 1;
		k2 += 2;
	}
	for (int i = (n - 1) / 2 - 1; i >= 0; i--){
		a.push_back(a[i]);
    }
	for (int i = 0; i < n; i++){
		cout << a[i] << endl;
    }
}