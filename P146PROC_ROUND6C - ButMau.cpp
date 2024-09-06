#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    set <int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout << 4-s.size();
    return 0;
}