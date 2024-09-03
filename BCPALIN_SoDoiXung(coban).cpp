#include <iostream>
using namespace std;
int check(string s){
	int l = 0;
	int r = s.size() - 1;
	while(l <= r){
		if(s[l] != s[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s) == 0) cout << "NO";
		else cout << "YES";
		cout << "\n";
	}
	return 0;
}