#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr) -> sync_with_stdio(false);
	int t;cin >> t;
	cin.ignore();
	while (t--){
		string n;
		getline(cin,n);
		if(n == "dung") cout << "2\n";
		else if(n == "lon hon") cout << "1\n";
		else cout << "3\n";
	}
}