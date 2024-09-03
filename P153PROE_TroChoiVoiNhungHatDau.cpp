#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;cin >> n;
    vector <ll> a(n+1);
    for(ll i = 0;i <= n;++i){
        cin >> a[i];
    }
    ll s = 0;
    for(ll i = n;i >= 1;--i){
        if( (a[i] + s) % i != 0){
            cout <<"No";
            return 0;
        }
        else{
            s = s + (a[i] + s)/i;
        }
    }
    cout <<"Yes";

}
