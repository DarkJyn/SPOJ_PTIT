#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

int main(){
	string s;
	cin >> s;
	while(s.size() % 3 != 0){
		s = "0"+s;
	}
	string res = "";
	for(int i = 0; i <= s.size() - 3;i+=3){
		int a = 0;
		if(s[i] == '1') a+=4;
		if(s[i+1] == '1') a += 2;
		if(s[i+2] == '1') a+=1;
		res = res + (char)(a+'0');
	}
	cout << res;
}