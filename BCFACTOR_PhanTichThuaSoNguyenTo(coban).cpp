#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    for(int i = 2;i <= sqrt(n);++i){
        int count = 0;
        while(n % i == 0){
            n /= i;
            count++;
        }
        if(count > 0) cout << i <<" "<< count << "\n";
    }
    if (n > 1) cout << n << " 1\n";
}