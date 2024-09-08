#include <bits/stdc++.h>
#include <string>
using namespace std;
using ll = long long;
string line1 = "qwertyuiop";
string line2 = "asdfghjkl;";
string line3 = "zxcvbnm,./";
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	char move;
    cin >> move;
    int index;
    if(move == 'L') index = 1;
    else if (move == 'R') index = -1;
    string s;
    cin >> s;
    int l = s.size();
    for(int i = 0 ; i<l ;++i){
        if(line1.find(s[i])!=-1) {
            if(index == 1){
                if(line1.find(s[i]) == 9) cout << line1[0] ;
                else cout << line1[line1.find(s[i])+index];
            }
            else{
                if(line1.find(s[i]) == 0) cout << line1[9];
                else cout << line1[line1.find(s[i])+index];
            }
        }
        else if(line2.find(s[i])!= -1) {
            if(index == 1){
                if(line2.find(s[i]) == 9) cout << line2[0];
                else cout << line2[line2.find(s[i])+index];
            }
            else{
                if(line2.find(s[i]) == 0) cout << line2[9];
                else cout << line2[line2.find(s[i])+index];
            }
        }
        else if(line3.find(s[i])!= -1) {
            if(index == 1){
                if(line3.find(s[i]) == 9) cout << line3[0];
                else cout << line3[line3.find(s[i])+index];
            }
            else{
                if(line3.find(s[i]) == 0) cout << line3[9];
                else cout << line3[line3.find(s[i])+index];
            }
        }
    }
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
}