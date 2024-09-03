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
    int x , s;
	cin >> x >> s;
	int a ,b,c,d,e;
	cin >> a >> b >>c>>d>>e;
	int tmp = s*x;
	cout << a - tmp<<" "<< b - tmp<<" "<< c- tmp<<" "<<d-tmp <<" "<<e-tmp;
}