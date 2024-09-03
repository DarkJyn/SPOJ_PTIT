#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        queue<ll> q;
        q.push(9);
        while (q.size()){
            ll k = q.front();
            q.pop();
            if (k % n == 0){
                cout << k << "\n";
                break;
            }
            q.push(k * 10);
            q.push(k * 10 + 9);
        }
    }
}