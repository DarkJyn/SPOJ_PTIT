#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    ll l, r, x, pos1, pos2, s = 0;
    stack<long long> st;
    vector<long long> v;
    st.push(0);
    while (st.size()){
        x = st.top();
        v.push_back(x);
        st.pop();
        if (x >= 1e9)
            continue;
        st.push(x * 10 + 4);
        st.push(x * 10 + 7);
    }
    sort(v.begin(), v.end());
    cin >> l >> r;
    pos1 = lower_bound(v.begin(), v.end(), l) - v.begin();
    pos2 = lower_bound(v.begin(), v.end(), r) - v.begin();
    if (pos1 == pos2){
        cout << (r - l + 1) * v[pos1];
    }
    else{
        s = (v[pos1] - l + 1) * v[pos1];
        s += (r - v[pos2 - 1]) * v[pos2];
        pos1++;
        while (v[pos1] < r){
            s += (v[pos1] - v[pos1 - 1]) * v[pos1];
            pos1++;
        }
        cout << s;
    }
}