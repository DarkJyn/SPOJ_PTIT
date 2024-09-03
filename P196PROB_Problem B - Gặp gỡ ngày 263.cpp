#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a[3];
	cin>>a[0] >>a[1]>>a[2];
	sort(a,a+3);
	cout << a[2] - a[0];
} 