#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		string a = s;
		vector<int> b;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == ' ')
				b.push_back(i);
		}
		for (int i = 0; i < a.size(); i++){
			if (a[i] == ' ')
				a.erase(i, 1);
		}
		a[0] += 32;
		a.push_back(a[0]);
		a.erase(0, 1);
		a[0] -= 32;
		a = a + "ee";
		for (int i = 0; i < b.size(); i++)
			a.insert(b[i], 1, ' ');
		cout << a << endl;
	}
}