#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int rev(int a){
    int tmp = 0;
    while(a != 0){
        tmp = tmp * 10 + a % 10;
        a /= 10;
    }
    return tmp;
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int a,b;
    cin >> a >> b;
    a = rev(a);
    b = rev(b);
    if(a > b) cout << a;
    else cout << b;
    return 0;
}