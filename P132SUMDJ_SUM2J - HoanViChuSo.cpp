#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(nullptr) -> sync_with_stdio(false);
	string s;
	cin >>s;
	int check = 0;
	for(int i = 0; i < s.size()-1;++i){
		if(s[i]<s[i+1]){
			check = 1;
		}
	}
	if (check == 0) cout << "0";
	else{
		next_permutation(s.begin(),s.end());
		cout << s;
	}	

}