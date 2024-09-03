#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
ll prime[1000005];
ll mark[1000005];
void sang(){
    prime[0] = 1;
    prime[1] = 1;
    for(ll i = 2;i <=1000000;++i){
        if(prime[i] == 0){
            mark[i] = mark[i-1] + 1;
            for(ll j = i*i;j<=1000000;j+=i){
                if(prime[j] == 0) prime[j] = 1;
            }
        }
        else mark[i] = mark[i-1];
    }
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    sang();
    int t = 1;
    while(t>0){
        int n;cin >>n;
        if(n == 0) return 0;
        else{
            int tmp  = mark[2*n] - mark[n];
            cout << tmp <<"\n";
        }
    }
}