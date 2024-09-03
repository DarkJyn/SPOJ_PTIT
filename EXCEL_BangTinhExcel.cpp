#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t = 1;
    while(t>0){
        string s;
        cin >> s;
        if(s == "R0C0") return 0;
        ll length = s.size();
        ll row = 0;
        ll col = 0;
        int check = 0;
        for(ll i = 1;i < length;++i){
            if(s[i] != 'C' && check < 1){
                row = row*10 +(s[i] - '0');
            }
            if(s[i] == 'C') check++;
        	else if(check != 0){
                col = col*10 +(s[i] - '0');
            }
        }
        string res = "";
        while(col > 26){
            int tmp = col % 26;
            if(tmp == 0){
                res = "Z" + res;
                col = (col - 26) / 26;
            }   
            else {
                res = static_cast<char>('A' + tmp - 1) + res;
                col = (col - tmp) /26;
            }
            // 26 + 2 = 7 -> AB
            // 52 = 26 + 26 -> AZ
            // 53 = 26 + 26 + 26  -> BA
            // 
        }
        res = static_cast<char>('A' + col - 1) + res;
        cout << res << row<<"\n";
    }
}