#include <bits/stdc++.h>
using namespace std;
int prime[200000];
void sang(){
    for(int i = 2;i*i<= 100000;++i){
        if(prime[i] == 0){
            for(int j = i*2; j<= 100000;j+=i){
                prime[j] = 1;
            }
        }
    }
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    sang();
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 2;i <=50000;++i){
            int sum = 0;
            if(prime[i] == 0){
                for(int j = i;j <=100000;++j){
                    if(prime[j] == 0){
                        sum+=j;
                        if(sum == n) cnt++;
                        if(sum > n) break; 
                    }                   
                }
            }
            else continue;
        }
        cout << cnt<<"\n";
    }
    return 0;
}