#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int a,b,v;
    cin >> a >> b >>v;
    if(a == v) cout <<"1";
    else{
        int tmp = v - a;
        if( tmp % (a-b) == 0){
            cout << (tmp / (a-b))+1;
        }
        else cout << (tmp / (a-b)) + 2;
        // 2 1 5 = 4
    }
    return 0;
}