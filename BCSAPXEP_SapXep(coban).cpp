#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;++i){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i < n;++i){
        cout << a[i] <<"\n";
    }
}