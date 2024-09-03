#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cmp);
    int x = a[0].second;
    int dd = 1;
    for (int i = 1; i < n; i++){
        if (a[i].first >= x){
            x = a[i].second;
            dd++;
        }
    }
    cout << dd;
}