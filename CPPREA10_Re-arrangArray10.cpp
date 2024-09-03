#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;cin >> t;
    while(t--){
        string s;cin >> s;
        int index = 0;
        vector<int> v;
        for(int i = 0;i < s.size();++i){
            if(s[i] == 'D'){
                if(i == 0 || s[i-1] == 'I'){
                    v.push_back(index + 1);
                    index++;
                }
                v.push_back(index+1);
                index++;
            }
            else{
                while(v.size()!= 0){
                    cout << v[v.size()-1];
                    v.erase(v.end()-1);
                }
                if(i == 0){
                    cout << index + 1;
                    index++;
                }
                if(s[i+1] != 'D'){
                    cout << index + 1;
                    index++;
                }
            }
        }
        while(v.size()!= 0){
            cout << v[v.size()-1];
            v.erase(v.end()-1);
        }
        cout <<"\n";
    }
}