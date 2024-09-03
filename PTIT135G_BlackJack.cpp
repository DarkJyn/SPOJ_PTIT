#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;
        int m;
        cin >> n >> m;
        int a[n];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        int tmp = 0;
        int sum = 0;
        for(int i = 0; i < n - 2;++i){
            for(int j = i+1;j < n -1;++j){
                for(int k = j + 1;k < n;++k){
                        sum = a[i] + a[j] + a[k];
                        if(sum > tmp && sum <= m) tmp = sum;
                }
            }
        }
        cout << tmp;
    }
	return 0;
}