#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int m,n;
    cin >> n >> m;
    int cnt = 0;
    while(1){
        if(n == 0 || m == 0) break;
        n--;
        m--;
        cnt++;
    }
    if( cnt % 2 == 0){
        cout << "Wilshere";
    }
    else cout <<"Xavi";
}