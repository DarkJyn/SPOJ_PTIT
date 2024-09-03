#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if(a[1]-a[0] == a[2]-a[1]) cout << a[2] + a[2] - a[1];
    else if(a[1] - a[0] > a[2] - a[1]) cout << (a[1] + a[0])/2;
    else if(a[1] - a[0] < a[2] - a[1]) cout << (a[2] + a[1])/2;
    return 0;
}