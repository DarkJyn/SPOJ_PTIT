#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
        int a1 = x1 - x2, b1 = x2 - x3, a2 = y1 - y2, b2 = y2 - y3, a3 = z1 - z2, b3 = z2 - z3;
        int x = a2 * b3 - a3 * b2, y = a3 * b1 - a1 * b3, z = a1 * b2 - a2 * b1;
        int k = x * (x1 - x4) + y * (y1 - y4) + z * (z1 - z4);
        if (k == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}