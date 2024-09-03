#include <bits/stdc++.h> 
using namespace std;
using ll = long long;
int main() {
    int t = 1;
    while(t>0){
        int a[5];
        cin >> a[0] >> a[1] >> a[2];
        if(a[0] == 0 && a[1] == 0 && a[2] == 0) return 0;
        sort(a, a + 3);
        if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) cout << "right";
        else cout << "wrong";
        cout << "\n";
    }
} 