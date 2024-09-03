#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct gt{
    int pos;
    int d;
    int x;
};
bool cmp(gt a, gt b){
    return a.pos < b.pos;
} 

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, l;
    cin >> n >> l;
    gt a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].pos >> a[i].d >> a[i].x;
    }
    sort(a, a + n, cmp);
    int s = 0;
    for (int i = 0; i < n; i++){
        if (i > 0){
            s += a[i].pos - a[i - 1].pos;
        }
        else{
            s += a[i].pos;
        }
        int k = s % (a[i].d + a[i].x);
        if (k < a[i].d){
            s += a[i].d - k;
        }
    }
    s += l - a[n - 1].pos;
    cout << s;
}