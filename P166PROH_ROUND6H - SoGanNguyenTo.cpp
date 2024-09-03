#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int a[3005];
int b[3005];
void era(){
	for (int i = 2; i <= 3000; i++){
		if (a[i] == 0){
			for (int j = i; j <= 3000; j += i){
				a[j] = 1;
				b[j]++;
			}
		}
	}
	for (int i = 0; i < 3000; i++){
		if (b[i] == 2){
			b[i] = 1;
        }
		else{
			b[i] = 0;
        }
	}
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n, s = 0;
	cin >> n;
	era();
	for (int i = 0; i <= n; i++){
		if (b[i] == 1) s++;
	}
	cout << s;
}