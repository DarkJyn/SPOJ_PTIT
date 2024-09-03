#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    while (1){
        int n;
        cin >> n;
        if (n == 0) return 0;
        int a[n + 1];
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int x = 1;
        for (int i = 1; i <= n; i++){
            for (int j = x; j <= a[i]; j++){
                cout << i << " ";
                x++;
            }
        }
        cout << endl;
    }
}