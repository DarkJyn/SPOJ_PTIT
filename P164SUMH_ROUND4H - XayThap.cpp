#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;cin >> n;
    if(n < 3) cout << "1";
    else{
        int cost = 3;
        int index = 2;
        while(n > cost){
            n -= cost;
            index++;
            cost += index;
        }
        cout <<index - 1;
    }

}