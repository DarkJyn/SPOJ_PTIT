#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long a[n] = {0}, ans = 0, k = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            int pos1 = i, pos2 = i, s1 = 0, s2 = 0;
            while (a[pos1] >= a[i] && pos1 >= 0){
                pos1--;
                s1++;
            }
            while (a[pos2] >= a[i] && pos2 < n){
                pos2++;
                s2++;
            }
            k = a[i] * (s1 + s2 - 1);
            ans = max(k, ans);
        }
        cout << ans << "\n";
    }
}