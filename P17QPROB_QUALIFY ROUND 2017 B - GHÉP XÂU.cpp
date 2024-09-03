#include <bits/stdc++.h>
using namespace std;

bool cmp (string a, string b) {
    return a+b<b+a;
}

main () {
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        string s[105];
        for(int i = 0; i < n;++i){
            cin >> s[i];
        }
        sort(s,s+n,cmp);
        string result = "";
        for(int i = 0;i<n;++i){
            result += s[i];
        }
        cout <<result<< "\n";
    }
} 