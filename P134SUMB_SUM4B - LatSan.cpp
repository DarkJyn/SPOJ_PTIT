#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll g,y;
	cin >> g >> y;
	y+=g;
	ll tong = (g/2)+2;
	ll delta = tong*tong - 4*y;
	ll a = (tong+sqrt(delta))/2;
	ll b = (tong-sqrt(delta))/2;
	if(a>b) swap(a,b);
	cout << a <<" "<<b;
}
