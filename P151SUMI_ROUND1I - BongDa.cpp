#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	int n;cin >> n;
    vector<string> v;
    for(int i = 0; i < n;++i){
        string x;
        cin >> x;
        v.push_back(x);
    }
    int cnt1 = 0;
    int cnt2 = 0;
    string tmp = v[0];
    string res;
    for(int i = 0;i < n;++i){
        if(v[i] != tmp){
            cnt1++;
            res = v[i];
        }
        else cnt2++;
    }
    if(cnt1 > cnt2){
        cout << res;
    }
    else cout << tmp;
}