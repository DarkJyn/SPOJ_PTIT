#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k = 0;
    cin >> n;
    string s;
    map<string, int> a;
    for (int i = 0; i < n; i++){
        cin >> s;
        if (a[s] > i - a[s]){
            k++;
        }
        a[s]++;
    }
    cout << k;
}