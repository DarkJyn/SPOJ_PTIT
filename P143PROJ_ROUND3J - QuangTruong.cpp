#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	ll n,m,a;
    cin >> n >> m >> a;
    ll canh1 = n / a;
    ll canh2 = m / a;
    if(n % a != 0) canh1++;
    if(m % a != 0) canh2++;
    cout << canh1*canh2;
}