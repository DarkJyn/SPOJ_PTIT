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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int s = 1;
    for (int i = 1; i < n; i++){
        if (a[i] - a[i - 1] > k) s++;
    }
    cout << s;
}