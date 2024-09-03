#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int a,b,c,d;
	cin >> a >> b >> c >> d;
	if( a==c || b==d) cout << "1 ";
	else cout<<"2 ";
	if(a - b == c - d || a + b == c + d) cout<<"1 ";
	else if( (a + b) % 2 == (c + d) % 2) cout<<"2 ";
	else cout<<"0 ";
	cout << max(abs(a - c),abs(b - d));
}