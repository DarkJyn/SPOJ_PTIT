#include <bits/stdc++.h> 
using namespace std;
using ll = long long; 
ll ucln(ll a,ll b){
    while ( b > 0){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main() {
    int t = 1;
    while(t>0){
        ll a,b;
        cin >> a >> b;
        if( a == 0 && b == 0) return 0;
        ll bcnn = 1ll *a / ucln(a,b) * b;;
        cout << ucln(a,b) << " "<< bcnn << "\n";
    }
} 