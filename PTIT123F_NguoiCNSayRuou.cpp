#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        int mark[n+ 5];
        for(int i = 1; i <= n;++i){
            mark[i] = 0;
        }
        for(int i = 1; i <= n;++i){
            for(int j = i; j <= n;j+=i){
                mark[j]++;
            }
        }
        int cnt = 0 ;
        for(int i = 1; i <= n;++i){
            if(mark[i] % 2 == 1) cnt++;
        }
        cout << cnt << "\n";
    }
 
    return 0;
}