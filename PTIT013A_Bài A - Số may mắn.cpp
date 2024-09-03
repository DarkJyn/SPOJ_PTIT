#include <bits/stdc++.h> 
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[s.size()-1] == '6' && s[s.size()-2] == '8') cout << 1;
        else cout << 0;
        cout << "\n";
    }
} 