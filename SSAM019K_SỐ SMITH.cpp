#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;
    cin >> n;
    ll m = n;
    ll s1 = 0, s2 = 0;
    for (int i = 2; i <= sqrt(n); i++){
        ll k = i;
        ll  s3 = 0;
        if (n % i == 0){
            while (k != 0){
                s3 += k % 10;
                k /= 10;
            }
        }
        while (n % i == 0){
            s1 += s3;
            n /= i;
        }
    }
    if (n > 1){
        while (n != 0){
            s1 += n % 10;
            n /= 10;
        }
    }
    while (m != 0){
        s2 += m % 10;
        m /= 10;
    }
    if (s1 == s2){   
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}