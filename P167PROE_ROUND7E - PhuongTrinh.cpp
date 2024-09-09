#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	int t;cin >> t;
    while(t--){
        ll n;cin >> n;
        int res = 1;
        for(ll i = 2*n-1;i > n;--i){
            if(i * n %(i - n) == 0) res += 2;
        }
        cout << res<<"\n";
    }
}