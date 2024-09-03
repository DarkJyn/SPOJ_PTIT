#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int check(string s){
    int tmp = s.size();
    for(int i = 0; i < tmp-1;++i){
        if(s[i] < s[i+1]) return 0;
    }
    return 1;
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int test;cin >> test;
        string s;
        cin >> s;
        char arr[s.size()+5];
        for(int i = 0; i < s.size();++i){
            arr[i] = s[i];
        }
        cout << test<< " ";
        if(check(s) == 1) cout << "BIGGEST";
        else{
            next_permutation(arr,arr+s.size());
            test++;
            for(int i = 0; i < s.size();++i){
                cout << arr[i];
            }
        }
        cout <<"\n";
    }   
    return 0;
}