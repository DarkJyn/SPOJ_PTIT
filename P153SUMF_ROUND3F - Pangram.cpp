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
	int check = 1;
	string s;
	cin >> n >> s;
	int a[125] = {};
	for (int i = 0; i < n; i++){
		if (s[i] >= 97 && s[i] <= 122){
			s[i] -= 32;
		}
		a[s[i]]++;
	}
	for (int i = 65; i <= 90; i++){
		if (a[i] == 0){
			check = 0;
			break;
		}
	}
	if (check) cout << "YES";
	else cout << "NO";
}