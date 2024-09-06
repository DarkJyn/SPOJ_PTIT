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
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int d1 = 0, d2 = 0, t1 = 0, t2 = 0, i = 0, j = n - 1;
    while (i <= j){
        if (t1 <= t2){
            d1++;
            t1 += a[i];
            i++;
        }
        else{
            d2++;
            t2 += a[j];
            j--;
        }
    }
    cout << d1 << " " << d2;
}