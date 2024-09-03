#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int x, y;
	int t[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> x >> y;
	int s;
	if (y != 1){
		s = 1;
		t[x] = t[x] - (8 - y);
		s += t[x] / 7;
		if (t[x] % 7 != 0) s++;
	}
	else{
		s = t[x] / 7;
		if (t[x] % 7 != 0) s++;
	}
	cout << s;
}