#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,s;
int cnt = 0;
void solve(int a,int b,int c){
    if(c > s) return;
    else if(c == s && b == 0) cnt++;
    else{
        for(int i = a + 1;i <= n;++i){
            solve(i,b-1,c+i);
        }
    }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    while(1){
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) return 0;
        cnt = 0;
        solve(0,k,0);
        cout << cnt<<"\n";
    }
}
