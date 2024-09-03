#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0;i <= 1000;++i){
        for(int j = 0;j <= 1000;++j){
            if(i * i + j == n && i + j * j == m) cnt++;
        }
    }
    cout << cnt;
}
