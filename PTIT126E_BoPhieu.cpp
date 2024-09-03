#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t = 1;
    while( t > 0){
        string s;
        cin >> s;
        if( s == "#") return 0;
        int cnty = 0;
        int cntn = 0;
        int cntp = 0;
        int cnta = 0;
        for(int i = 0; i < s.size();++i){
            if(s[i] == 'Y') cnty++;
            else if(s[i] == 'A') cnta++;
            else if(s[i] == 'N') cntn++;
            else if(s[i] == 'P') cntp++;
        }
        int tmp;
        if(s.size() % 2 == 0) tmp = s.size()/2;
        else tmp = (s.size()/2) + 1;
        if(cnta >= tmp) cout << "need quorum";
        else if(cnty > cntn) cout <<"yes";
        else if(cnty == cntn) cout << "tie";
        else if(cnty < cntn) cout <<"no";
        cout<< "\n";
    }
    return 0;
}