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
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int l[k + 5] = {};
        l[0] = 1;
        for (int i = 1; i <= n; i++){
            for (int j = k; j >= a[i]; j--){
                if (l[j] == 0 && l[j - a[i]] == 1){
                    l[j] = 1;
                }
            }
        }
        if (l[k] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}