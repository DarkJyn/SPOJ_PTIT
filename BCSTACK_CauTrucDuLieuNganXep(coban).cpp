#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int v[1005];
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t = 1;
    int index = 0;
    while(t>0){
        string s;
        cin >> s;
        if(s == "end") return 0;
        else if(s == "init"){
            index = 0;
        }
        else if(s == "push"){
            int x;cin >> x;
            index++;
            v[index] = x;
        }
        else if(s == "pop"){
            if(index != 0) index--;
            else continue;
        }
        else if(s == "top") {
            if(index == 0) cout <<"-1\n";
            else cout << v[index]<<"\n";
        }
        else if( s == "size") cout << index <<"\n";
        else if(s == "empty"){
            if(index == 0) cout << "1\n";
            else cout <<"0\n";
        }
    }
}