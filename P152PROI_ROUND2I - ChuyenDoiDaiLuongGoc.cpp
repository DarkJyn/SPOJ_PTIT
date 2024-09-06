#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        n = n % 360;
        if (n == 0) cout << "0$\n";
        else{
            if (n == 180) cout << "$\n";
            else{
                int k = __gcd(n, 180);
                if (n / k == 1) cout << "$/" << 180 / k << endl;
                else cout << n / k << "$/" << 180 / k << endl;
            }
        }
    }
    
}