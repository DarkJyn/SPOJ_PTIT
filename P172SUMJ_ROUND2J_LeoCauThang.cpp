#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,m;cin >> n >> m;
    int tmp = m;
    if(n < m) cout<<"-1";
    else{
        while(n <= 10000){
            if(n > 2*m){
                m += tmp; 
            }
            else if(n == 2*m){
                cout << n / 2;
                return 0;
            }
            else{
                int cnt = 0;
                int tmp = m -  (n / 2);
                while(tmp != 0){
                    cnt++;
                    tmp--;
                }
                cout << n / 2 + cnt;
                return 0;
            }
        }
    }
}