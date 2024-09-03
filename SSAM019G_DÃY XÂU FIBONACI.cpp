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
        ll n, k;
        cin >> n >> k;
        ll a[n + 1];
        a[1] = 1;
        a[2] = 1;
        for (int i = 3; i <= n; i++){
            a[i] = a[i - 1] + a[i - 2];
        }
        while (1){
            if (n == 1){
                cout << "A\n";
                break;
            }
            else if (n == 2){
                cout << "B\n";
                break;
            }
            if (k > a[n - 2]){
                k -= a[n - 2];
                n--;
            }
            else n -= 2;
        }
    }
}