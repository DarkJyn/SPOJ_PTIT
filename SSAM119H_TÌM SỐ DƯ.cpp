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
        string a;
        cin >> a;
        int k = a.size(), b;
        if (k == 1){
            b = a[0] - 48;
        }
        else{
            b = a[k - 1] - 48 + 10 * (a[k - 2] - 48);
        }
        if (b % 4 == 0){
            cout << "4\n";
        }
        else{
            cout << "0\n";
        }
    }
}
    