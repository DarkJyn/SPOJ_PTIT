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
        int n, m;
        cin >> n >> m;
        cin.ignore();
        vector<string> a;
        string x;
        int b[5] = {};
        for (int i = 0; i < 5 * n + 1; i++){
            cin >> x;
            a.push_back(x);
        }
        for (int i = 1; i < 5 * n + 1; i += 5){
            for (int j = 1; j < 5 * m + 1; j += 5){
                int k = i, s = 0;
                while (a[k][j] == '*'){
                    k++;
                    s++;
                }
                b[s]++;
            }
        }
        for (int i = 0; i < 5; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}