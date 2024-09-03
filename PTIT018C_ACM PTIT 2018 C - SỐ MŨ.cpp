#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int chiadu(string a, ll b){
	ll du = 0;
	for (int i = 0; i < a.length(); i++){
		du = (du * 10 + a[i] - 48) % b;
    }
	return du;
}
ll pow1(ll n, ll m, ll p){
	if (m == 1){
		return n;
    }
	if (m % 2 == 0){
		return (pow1(n, m / 2, p) * pow1(n, m / 2, p)) % p;
    }
	else return (n * pow1(n, m - 1, p)) % p;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
	cin >> t;
	while (t--){
		string a;
		ll b, m;
		cin >> a >> b >> m;
		ll k = chiadu(a, m);
		cout << pow1(k, b, m) << endl;
	}   
}