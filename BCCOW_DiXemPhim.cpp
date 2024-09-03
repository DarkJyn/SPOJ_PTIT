#include <bits/stdc++.h>
using namespace std;
int res;int n;int c;
int a[20];
int m;
void solve(int k){
    if(res <= c){
        if(res > m){
            m = res;
        }
        if(k < n){
            solve(k+1);
        }
    }
    res += a[k];
    if(res <= c){
        if(res > m){
            m = res;
        }
        if(k < n-1){
            solve(k+1);
        }
    }
    res -= a[k];
}
int main(){
    cin >> c >> n;
    for(int i = 0 ;i< n;++i){
        cin >> a[i];
    }
    solve(0);
    cout << m;
	return 0;
}