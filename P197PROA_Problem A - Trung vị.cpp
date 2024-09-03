#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n,s;
    cin >> n >> s;
    ll a[n];
    for(ll i = 0;i < n;++i){
        cin >> a[i]; 
    }
    sort(a,a+n);
    ll res= 0;
    if(a[n/2]>s){
        for(ll i = 0;i <= n/2;++i){
            if(a[i] > s) res+=a[i]-s;
        }
    }
    if(a[n/2] < s){
        for(ll i = n/2 ;i < n;++i){
            if(a[i] < s) res += s - a[i];
        }  
    }
    cout << res;
}