#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int length = s.size();
    int check = 0;
    for(int i = 0; i < length;++i){
        if(s[i] == '0' && check == 0){
            check++;
            continue;
        }
        else if(i==length-1 && s[i] == '1' && check == 0) continue;
        else cout << s[i];
    }
    return 0;
}