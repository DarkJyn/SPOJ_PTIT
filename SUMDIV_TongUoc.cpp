#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
int main() {
    int t;cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll can = sqrt(n);
        ll sum = 0;
        for(ll i = 1; i <= can;++i ){
            if( n % i == 0 && i * i != n) sum = sum + i + (n/i);
            else if(i * i == n) sum += i;
        }
        cout << sum << "\n";
    }
} 