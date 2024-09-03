#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    getline(cin,s);
    if(s.size() == 1) cout <<"0";
    else cout << s.size()-1;
}