#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >>n;
    string s;
    cin >>s;
    int cnt = 1;int check = 0;
    for(int i = 0 ; i < n;++i){
        if(s[i] == 'S') cnt++;
        else if(s[i] == 'L'){
            check++;
            if(check == 2) {
                cnt++;
                check = 0;
            }
        }
    }
    cout << min(n,cnt);
    return 0;
}