#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll n; cin >> n;
    if(n == 3) cout << "0";
    else if( n == 4) cout << "1";
    else{
        cout << (n-3)*(n-2)*(n-1)*n/24;
    }
    return 0;
}