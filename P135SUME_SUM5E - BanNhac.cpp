#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int a[8];
    for (int i = 0;i <8;++i){
        cin >>a[i];
    }
    int check = 0;
    int check1 = 0;
    for (int i = 0;i <7;++i){
        if(a[i] > a[i+1]) check++;
        if(a[i] < a[i+1]) check1++; 
    }
    if(check1 == 7) cout << "ascending";
    else if(check == 7) cout <<"descending";
    else cout << "mixed";
}