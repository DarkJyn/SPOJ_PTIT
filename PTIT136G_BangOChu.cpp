#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    vector<string> b;
    for (int i = 0; i < n; ++i ){
        int j = 0;
        while (j < m){
            string s = "";
            while (a[i][j] != '#'){
                s = s + a[i][j];
                j++;
                if (j == m)
                    break;
            }
            if (a[i][j] == '#') j++;
            if (s.size() > 1) b.push_back(s);
        }
    }
    for (int i = 0; i < m; ++i ){
        int j = 0;
        while (j < n){
            string s = "";
            while (a[j][i] != '#'){
                s = s + a[j][i];
                j++;
                if (j == n) break;
            }
            if (a[j][i] == '#') j++;
            if (s.size() > 1) b.push_back(s);
        }
    }
    sort(b.begin(), b.end());
    cout << b[0];
}