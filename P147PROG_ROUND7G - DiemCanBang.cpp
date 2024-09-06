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
    vector<double> a, b;
    int n;
    while (cin >> n){
        if (n < 0){
            break;
        }
        else{
            int x[n], y[n], m[n];
            for (int i = 0; i < n; i++){
                cin >> x[i] >> y[i] >> m[i];
            }
            double s1 = 0, s2 = 0, s = 0;
            for (int i = 0; i < n; i++){
                s1 += m[i] * x[i];
                s2 += m[i] * y[i];
                s += m[i];
            }
            a.push_back(s1 / s);
            b.push_back(s2 / s);
        }
    }
    for (int i = 0; i < a.size(); i++){
        cout << fixed << setprecision(2) << "Case " << i + 1 << ": " << a[i] << " " << b[i] << endl;
    }
}