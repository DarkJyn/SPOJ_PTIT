#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string solve(string s){
    string tmp = "";int count = 0;
    for(int i = s.size()-1;i>=0;i--){
        tmp = s[i] + tmp;
        count++;
        if(count == 3&&i != 0){
            tmp = "," + tmp;
            count = 0;
        }
    }
    return tmp;
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s;
    cin >> s;
    cout << solve(s);
    return 0;
}