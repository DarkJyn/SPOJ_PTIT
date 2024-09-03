#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int b[2];
	cin >> b[0] >> b[1];
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(b,b+2);
	sort(a,a+3);	
	if(a[0] <= b[0] && a[1] <= b[1] && a[2]*a[2] == a[1] * a[1] + a[0] * a[0]) cout << "YES";
	else cout << "NO";
} 