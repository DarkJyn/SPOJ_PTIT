#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin >>t;
    int test = 1;
    while(t--){
        double n,l,m;
        cin >> n >> l >> m;
        int cnt = 0;
        while(n<m){
            n += n*l/100;
            cnt++;
        }
        cout << cnt <<"\n";
    }
    return 0;
}