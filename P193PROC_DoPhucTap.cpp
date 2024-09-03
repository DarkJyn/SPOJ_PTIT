#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mark[26];
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;cin >> s;
    for(int i = 0;i < s.size();++i){
        mark[s[i]-'a']++;
    }
    sort(mark,mark+26);
    int cnt = 0;
    for(int i = 0;i < 26;++i){
        if(mark[i] > 0) cnt++; 
    }
    int res = 0;
    for(int i = 26 - cnt;i < 24;++i){
        res += mark[i];
    }
    cout << res;
}
