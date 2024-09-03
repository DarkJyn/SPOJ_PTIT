    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    #define MOD 1000000007;
    int main(){
        cin.tie(nullptr) -> sync_with_stdio(false);
        int a,b,c;
        cin >> a >> b >> c;
        cout << max(b-a,c-b) - 1;
    }