#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a[10];
	set<int> s;
	for(int i = 0; i < 10;++i){
		cin >> a[i];
	}
	for(int i = 0; i < 10;++i){
		int tmp = a[i] % 42;
		s.insert(tmp);
	}
	cout << s.size();
}
