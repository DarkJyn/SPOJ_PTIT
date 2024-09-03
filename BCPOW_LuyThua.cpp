#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,m;
    cin >> n >> m;
    int cnt1 = 0;
    int cnt2 = 0;
    ll save1 = 1;
    ll save2 = 1;
    for(int i = 0;i < n;++i){
        save1 *= 2;
        if(save1  > 999999999){
            save1 /= 10;
            cnt1++;
        }
    }
    for(int i = 0;i < m;++i){
        save2 *= 3;
        if(save2  > 999999999){
            save2 /= 10;
            cnt2++;
        }
    }
    if(cnt1 > cnt2){
        while(save1 > 9) save1 /= 10;
        cout << save1;
    }
    else if(cnt2>cnt1){
        while(save2 > 9) save2 /= 10;
        cout << save2;
    }
    else{
        ll k = save1 + save2;
        while(k > 9) k /= 10;
        cout << k; 
    }

}