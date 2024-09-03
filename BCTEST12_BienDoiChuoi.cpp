#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string final ="";
    for(int i = 0; i < s.size();++i){
        if(s[i] == 'a' || s[i] == 'u'|| s[i] == 'e'|| s[i] == 'i' ||s[i] == 'y'|| s[i] == 'o'){
            continue;
        }
        else{
            final = final + "." + s[i];
        }
    }
    cout << final;
}