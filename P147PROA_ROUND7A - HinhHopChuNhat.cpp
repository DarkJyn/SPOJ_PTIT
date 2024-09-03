#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll a,b,c;
    cin >> a >> b >> c;
	ll tich = sqrt(a*b*c);
    ll s = 4 * (tich / a + tich / b + tich / c);
    cout << s;
}