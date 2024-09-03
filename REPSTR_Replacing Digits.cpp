#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	string a,b;
    cin >> a >> b;
    int cnt[10] = {};
    for(int i = 0; i < b.length();++i){
        cnt[b[i] - '0']++;
    }
    for(int i = 0; i < a.size();++i){
        for(int j = 9;j > a[i] - '0';--j){
            if(cnt[j] > 0){
                cnt[j]--;
                a[i] = j + '0';
                break;
            }
        }
    }
    cout << a;

}