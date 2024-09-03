#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	cout << min(n,m)<<" "<<(max(n,m) - min(n,m))/2;
}