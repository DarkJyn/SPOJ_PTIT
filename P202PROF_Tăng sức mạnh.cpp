#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        ll a,b,c;cin >> a >> b >> c;
        if(b - a >= c) cout <<"0";
        else{
            if(a <= b + c){
                if( (a + c - b) % 2 == 1) cout << (a + c - b + 1)/2;
                else cout << (a + c -b)/2;
            }
            else cout << c + 1;
        }
        cout <<"\n";
    }
}
