#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int ok = 0;
        vector <string> v(n);
        for(int i = 0;i < n;++i){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for(int i = 0;i < n - 1;++i){
            string s = v[i+1].substr(0,v[i].size());
            if(s == v[i]){
                ok = 1;
                break;    
            }
        }
        if(ok == 1) cout <<"NO";
        else cout << "YES";
        cout <<"\n";
    }
}