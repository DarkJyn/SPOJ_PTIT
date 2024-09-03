#include <bits/stdc++.h> 
using namespace std;
using ll = long long;
bool check(ll n){
    while(n > 10){
        int tmp = n % 10;
        if(tmp != 4 && tmp != 7) return false;
        n /= 10;
    }
    if(n != 4 && n != 7) return false;
    return true;
}
int main() {
    ll n;
    cin >> n;
    int count = 0;
    while(n >= 10){
        int tmp = n % 10;
        if(tmp == 4 || tmp == 7) count++;
        n /= 10;
        if(n == 4 || n == 7) count++;
    }
    if(check(count) == true) cout <<"YES";
    else cout << "NO";
} 