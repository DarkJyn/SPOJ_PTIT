#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        string a;
        int i = 0;
        cin >> a;
        while (i < a.length()){
            int s = 0, res = i;
            while (a[res] == a[i]){
                res++;
                s++;
            }
            cout << s << a[i];
            i = res;
        }
        cout << "\n";
    }
}