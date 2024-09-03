#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    int r = b.length();
    int c = a.length();
    int vth = 0, vtc = 0;
    int kt = 0;
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            if (a[i] == b[j]){
                vtc = i;
                vth = j;
                kt = 1;
                break;
            }
        }
        if (kt == 1) break;
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (i == vth) cout << a[j];
            else if (j == vtc) cout << b[i];
            else{
                cout << ".";
            }
        }
        cout << "\n";
    }
}