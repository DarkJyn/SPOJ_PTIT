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
    int t = 1;
    while (t > 0){
        string a, b;
        cin >> a >> b;
        if (a == "END" && b == "END") return 0;
        int c[200] = {}, d[200] = {}, ok = 1;
        for (int i = 0; i < a.size(); i++){
            c[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++){
            d[b[i]]++;
        }
        for (int i = 0; i < 200; i++){
            if (c[i] != d[i]){
                ok = 0;
                break;
            }
        }
        cout << "Case " << t++ << ": ";
        if (ok == 0){
            cout << "different\n";
        }
        else cout << "same\n";
    }
}