#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        ll b,n;
        cin >> b >> n;
        if(n < b){
            cout << n * n <<"\n";
        }
        else if(n == b) cout <<"1\n";
        else{
            ll tmp = b;
            ll cnt = 1;
            while(b < n){
                b *= tmp;
            }
            if(b == n) cout <<"1\n";
            else{
                b /= tmp;
                ll s = 0;
                while(n != 0){
                    s += (n/b)*(n/b);
                    n -=  n/b*b;
                    b/=tmp;
                }
                cout << s<<"\n";
            }
        }
    }
}