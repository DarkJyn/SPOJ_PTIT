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
        ll a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ok = 0;
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if (a[i] == a[j]){
                    cout << a[i] << "\n";
                    ok = 1;
                    break;
                }
            }
            if (ok == 1) break;
        }
        if (ok == 0) cout << "NO\n";
    }
    
}