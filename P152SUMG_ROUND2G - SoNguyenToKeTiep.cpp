#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

bool nto(int n){
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n, m;
    cin >> n >> m;
    int check = 1;
    for (int i = n + 1; i < m; i++){
        if (nto(i)){
            check = 0;
            break;
        }
    }
    if (check == 1 && nto(n == 1) && nto(m) == 1 && m != n && m > n)
        cout << "YES";
    else
        cout << "NO";
}