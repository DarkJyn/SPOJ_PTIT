#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
    int n;cin >> n;
    int up = 0;
    int down = 0;
    int minu = 1000000;
    int mind = 1000000;
    while(n--){
        int a,b;cin >> a >> b;
        up+= a;
        down += b;
        if(a < minu) minu = a;
        if(b < mind) mind = b;
    }
    up += mind;
    down += minu;
    if(up < down) cout <<down;
    else cout << up;
}