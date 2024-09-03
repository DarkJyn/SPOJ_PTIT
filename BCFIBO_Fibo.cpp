#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
ll fibo(ll n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return (fibo(n - 1) + fibo(n-2)) % MOD; 
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll n;
    cin >> n;
    cout << fibo(n);
    return 0;
}