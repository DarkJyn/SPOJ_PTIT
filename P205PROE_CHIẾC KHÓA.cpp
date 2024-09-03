#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	string s1, s2;
	cin >> n >> s1 >> s2;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int x = abs(s1[i] - s2[i]);
		if (x > 5)
			x = 10 - x;
		dem += x;
	}
	cout << dem;
}