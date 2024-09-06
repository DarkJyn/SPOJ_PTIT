#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int a, b;
    cin >> a >> b;
    int c[a + 1], d[b + 1];
    for (int i = 0; i <= a; i++){
        cin >> c[i];
    }
    for (int i = 0; i <= b; i++){
        cin >> d[i];
    }
    if (a > b){
        if ((float)c[0] / d[0] < 0){
            cout << "-Infinity";
        }
        else{
            cout << "Infinity";
        }
    }
    else if (b > a) cout << "0/1";
    else{
        if ((float)c[0] / d[0] < 0){
            if (c[0] < 0){
                c[0] *= -1;
            }
            if (d[0] < 0){
                d[0] *= -1;
            }
            int k = __gcd(c[0], d[0]);
            cout << "-" << c[0] / k << "/" << d[0] / k;
        }
        else{
            if (c[0] < 0){
                c[0] *= -1;
            }
            if (d[0] < 0){
                d[0] *= -1;
            }
            int k = __gcd(c[0], d[0]);
            cout << c[0] / k << "/" << d[0] / k;
        }
    }   
}