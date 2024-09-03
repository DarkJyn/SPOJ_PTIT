#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t = 1;
    while(t>0){
        int n;
        cin >> n;
        if(n == 0) return 0;
        set <int> s;
        for(int i = 0; i < n;++i){
            for(int j = 1;j<=6;++j){
                int x;cin >>x;
                s.insert(x);
            }
        }
        if(s.size() == 49) cout <<"Yes";
        else cout << "No";
        cout << "\n";
    }
}