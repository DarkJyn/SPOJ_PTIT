#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int save[1005];
int check(int n){
    while(n != 0){
        int tmp = n % 10;
        if(tmp != 4 && tmp != 7) return 0;
        n /= 10;
    }
    return 1;
}
void sang(){
    for(int i = 1; i < 1005;++i){
        if(check(i)){
            for(int j = i; j < 1005;j+=i){
                save[j] = 1;
            }
        }
    }
}
int main(){
    sang();
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; cin >> n;
    if(save[n] == 1) cout <<"YES";
    else cout << "NO";
    return 0;
}