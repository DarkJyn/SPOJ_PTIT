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
    int n;
    cin >> n;
    int a[n + 5];
    int s  = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == 1){
            s++;
        }
    }
    if (s == n) cout << n - 1;
    else{
        int ans = 0;
        int s1,s2;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                s1 = 0;
                s2 = 0;
                for (int k = i; k <= j; k++){
                    if (a[k] == 1) s1++;
                    else s2++;
                }
                if (s2 - s1 + s > ans){
                    ans = s2 - s1 + s;
                }
            }
        }
        cout << ans;
    }
}
