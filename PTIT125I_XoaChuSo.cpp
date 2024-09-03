#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,k;
    cin >> n >> k;
    char c;
    vector <char> v;
    for(int i = 0;i < n;++i){
        cin >> c;
        if(v.empty()) v.push_back(c);
        else{
            while(c  > v.back() && k > 0 && !v.empty()){
                v.pop_back();
                k--;
            }
            v.push_back(c);
        }
    }
    for(auto i : v){
        cout << i;
    }
}