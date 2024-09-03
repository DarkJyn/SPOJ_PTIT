#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;
struct matran{
    ll X[2][2];
    friend matran operator * (matran a, matran b){
        matran c;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                c.X[i][j] = 0;
                for(int k = 0; k < 2; k++){
                    c.X[i][j] += a.X[i][k] * b.X[k][j];
                    c.X[i][j] %= MOD;
                }
            }
        }
        return c;
    }
};

matran binpow(matran a, ll n){
    if(n == 1){
        return a;
    }
    matran tmp = binpow(a, n / 2);
    if(n % 2 == 1){
        return tmp * tmp * a;
    }
    else{
        return tmp * tmp;
    }
}

int main(){
	ll m,n;cin >> m >> n;
	matran a;
	a.X[0][0] = 1; a.X[0][1] = 1;
	a.X[1][0] = 1; a.X[1][1] = 0;
	matran res = binpow(a, n);
    matran res1 = binpow(a,n+1);
	ll s = ((res.X[1][0] + res1.X[1][0] - 1) % MOD) * m;
    s = s % MOD;
    cout << s;
}