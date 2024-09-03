#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
    ll n;cin >> n;
    ll a[n];
    for(ll i = 0;i < n;++i){
        cin >> a[i];
    }
    sort(a,a+n);
    ll tmp = a[0];
    ll res = 1;
    for(int i = 1;i < n;++i){
        if(tmp<= a[i]){
            res++;
            tmp+=a[i];
        }
    }
    cout << res;
}