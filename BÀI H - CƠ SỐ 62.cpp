#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    while (1){
        string a;
        cin >> a;
        if (a == "end") return 0;
        int n = a.size(), h = 0, k;
        for (int i = 0; i < n; i++){
            if (a[i] >= 'A' && a[i] <= 'Z'){
                k = a[i] - 'A' + 10;   
            }
            else if (a[i] >= 'a' && a[i] <= 'z'){
                k = a[i] - 'a' + 36;
            }
            else{
                k = a[i] - '0';
            }
            h += k % 61;
            h %= 61;
        }
        if (h % 61 == 0){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
    }   
}