#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t = 1;
    while(t>0){
        ll n;
        cin >> n;
        if(n == 0) return 0;
        ll sum = 1;
        for(ll i = 2;i<=n;++i){
            sum *= i; 
        }
        cout << sum << "\n";
    }
}