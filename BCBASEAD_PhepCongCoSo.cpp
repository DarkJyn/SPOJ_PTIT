#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    vector <string> v(16);
    v[0] ="{}";
    v[1] = "{{}}";
    for(int i = 2;i <= 15;++i){
        v[i] = "{";
        for(int j = 0;j < i;++j){
            v[i] += v[j];
            if(j == i - 1) v[i] += "}";
            else v[i] += ",";
        }
    }
    int t;cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        int tmp = 0;
        for(int i = 0;i < 16;++i){
            if(v[i] == a) tmp += i;
            if(v[i] == b) tmp += i;
        }
        cout << v[tmp] <<"\n";
    }
}