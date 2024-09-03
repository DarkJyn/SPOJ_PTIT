#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string a;
    while (1){
        cin >> a;
        if (a == "[END]") return 0;
        ll n;
        cin >> n;
        ll t = n % 5;
        if (t % 2 == 0 && t != 4) printf("Hanako\n");
        else{
            printf("Taro\n");
        }
    }
}