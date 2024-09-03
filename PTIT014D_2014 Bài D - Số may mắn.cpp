#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--){
		string n;
		cin >> n;
		while (n.size() > 1){
			int s = 0;
			for (int i = 0; i < n.size(); i++)
				s += n[i] - 48;
			n = "";
			while (s != 0){
				char h = s % 10 + 48;
				s /= 10;
				n = h + n;
			}
		}
		if (n == "9") cout << "1" << endl;
		else cout << "0" << endl;
	}
}