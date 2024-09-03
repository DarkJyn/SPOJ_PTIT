#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
struct point{
    int x,y;
};
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    point a,b,c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    if(a.x == b.x){
        cout << c.x<<" ";
        if(c.y == max(a.y,b.y)) cout << min(a.y,b.y);
        else if(c.y == min(a.y,b.y)) cout << max(a.y,b.y);
    }
    else if( a.x == c.x){
        cout << b.x<<" ";
        if(b.y == max(a.y,c.y)) cout << min(a.y,c.y);
        else if(b.y == min(a.y,c.y)) cout << max(a.y,c.y);
    }
    else if (b.x == c.x){
        cout << a.x<<" ";
        if(a.y == max(c.y,b.y)) cout << min(c.y,b.y);
        else if(a.y == min(c.y,b.y)) cout << max(c.y,b.y);
    }
    return 0;
}