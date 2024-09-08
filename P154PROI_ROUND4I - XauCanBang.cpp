#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());
        int check = 1;
        for(int i  = 1;i < a.size();++i){
            if(abs(a[i] - a[i-1]) != abs(b[i]- b[i-1])){
                cout <<"NO" <<endl;
                check = 0;
                break;
            }
        }  
        if(check) cout << "YES"<<endl;
    }    
}