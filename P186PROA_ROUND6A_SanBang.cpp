#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,m,d;
    cin >> n >> m >> d;
    n *= m;
    float a[n];
    float s = 0;
    for(int i = 0;i < n;++i){
        cin >> a[i];
        s += a[i];
    }
    sort(a,a+n);
    s /= n;
    int k = lower_bound(a,a+n,s) - a;
    if(abs(a[k-1] - s) < abs(a[k] - s)) k--;
    s = 0;
    for(int i = 0;i < n;++i){
        if((int)abs(a[i] - a[k]) % d != 0){
            cout << "-1";
            return 0;
        }
        s += abs(a[i]-a[k]) / d;
    }
    cout << s;
}