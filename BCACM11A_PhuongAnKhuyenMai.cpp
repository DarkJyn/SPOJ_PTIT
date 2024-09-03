#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,k;
int check(int cnt1, int cnt2, int cnt3){
    if(cnt1<n) return 0;
    cnt3 = cnt3 - n;cnt2 = cnt2 - n;
    if(cnt2 < m) return 0;
    cnt3 = cnt3 - m;
    if(cnt3 < k) return 0;
    return 1;
}//145 180 900
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        if(check(145,180,900)) cout << "YES";
        else cout <<"NO";
        cout <<"\n";
    }
}