#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, s = 0;
	cin >> n;
	int a[n];
	vector<int> b;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] % 2 == 0) s += a[i];
		else b.push_back(a[i]);
	}
	sort(b.begin(), b.end());
	if (b.size() % 2 == 1){
		for (int i = 0; i < b.size(); i++){
			s += b[i];
        }
		cout << s;
	}
	else{
		for (int i = 1; i < b.size(); i++){
			s += b[i];
        }
		cout << s;
	}
} 