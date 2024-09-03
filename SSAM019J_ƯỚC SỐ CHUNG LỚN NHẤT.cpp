#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int ucln(int a,int b){
    while(b!=0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int bcnn(int a ,int b){
    return b*a/ucln(a,b);
}
int main(){
int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        int res[n+1];
        res[0] = a[0];
        for(int i = 1;i<n;++i){
            res[i] = bcnn(a[i-1],a[i]);
        }
        res[n] = a[n-1];
        for(int i = 0;i < n+1;++i){
            cout << res[i]<<" ";
        }
        cout <<"\n";
    }
}