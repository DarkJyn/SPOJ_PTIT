#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	string s;cin >> s;
    int l = 0;
    int r = 0;
    int maxl = 0;
    int maxr = 0;
    int res = 0;
    for(int i = 0;i < s.size();++i){
        if(s[i] == 'L'){
            l++;
            maxl++;
            if(maxl - r > res) res = maxl - r;
        }
        else if(s[i] == 'R'){
            r++;
            maxr++;
            if(maxr - l > res) res = maxr - l;
        }
        else if(s[i] =='?'){
            maxl++;
            maxr++;
            if(maxl - r > res) res = maxl - r;
            if(maxr - l > res) res = maxr - l;
        }
    }
    cout << res;
}