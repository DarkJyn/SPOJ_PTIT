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
    int x;
	cin >> x;
    int d = 1;
    int i = 2;
	while (x >= d){
		x -= d;
		d += i;
		i++;
	}
	cout << i - 2;
}