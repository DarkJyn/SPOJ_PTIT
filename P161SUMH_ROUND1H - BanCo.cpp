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
	char a[n + 2][n + 2];
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
        }
    }
	for (int i = 0; i < n + 2; i++){
		a[i][0] = 'x';
		a[0][i] = 'x';
		a[i][n + 1] = 'x';
		a[n + 1][i] = 'x';
	}
    int check = 1;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			int s = 0;
			if (a[i + 1][j] == 'o')	s++;
			if (a[i][j - 1] == 'o') s++;
			if (a[i][j + 1] == 'o') s++;
			if (a[i - 1][j] == 'o') s++;
			if (s % 2 != 0){
				check = 0;
				break;
			}
		}
	}
	if (check == 1) cout << "YES";
	else cout << "NO";
}