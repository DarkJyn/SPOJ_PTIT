#include <bits/stdc++.h> 
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while(t--){
        int test,n;
        cin >> test >> n;
        string s;
        cin >> s;
        cout << test << " ";
        for(int i = 0;i < s.size();++i){
            for(int j = 0; j < n;++j){
                cout <<s[i];
            }
        }
        cout <<"\n";
    }
} 