#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
ll fac(ll n){
    ll final = 1;
    for(int i = 1; i <= n;++i) final *= 2;
    return final;
}
ll solve(ll n){
    ll sum = 0;
    for(ll i = 1;i <= n;++i){
        sum+= fac(i);
    }
    return sum;
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll n; cin >> n;
    cout << solve(n);
    return 0;
}