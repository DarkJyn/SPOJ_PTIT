#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string a;
	cin >> a;
	while (a.length() % 3 != 0) a = '0' + a;
	for (int i = 0; i < a.size(); i += 3){
		string b = "";
		for (int j = i; j < i + 3; j++) b += a[j];
		if (b == "000"){
			cout << "0";
        }
		if (b == "001"){
			cout << "1";
        }
		if (b == "010"){
			cout << "2";
        }
		if (b == "011"){
			cout << "3";
        }
		if (b == "100"){
			cout << "4";
        }
		if (b == "101"){
			cout << "5";
        }
		if (b == "110"){
			cout << "6";
        }
		if (b == "111"){
			cout << "7";
        }
	}
}