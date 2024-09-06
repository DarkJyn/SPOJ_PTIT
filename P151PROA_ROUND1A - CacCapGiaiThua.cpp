#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		int b[10] = {};
		string s;
		cin >>s;
		
		for(int i = 0;i < n;++i){
			if(s[i] == '2'){
				b[2]++;
			}
			else if(s[i] == '3'){
				b[3]++;
			}
			else if(s[i] == '4'){
				b[3]++;
				b[2]+= 2;
			}
			else if (s[i] == '5')
			{
				b[5]++;
			}
			else if(s[i] == '6'){
				b[5]++;
				b[3]++;
			}
			else if(s[i] == '7'){
				b[7]++;
			}
			else if(s[i] == '8'){
				b[7]++;
				b[2]+=3;
			}
			else if(s[i] == '9'){
				b[7]++;
				b[2]++;
				b[3]+=2;
			}
		}
		for(int i = 7;i>1;--i){
			for(int j = 0;j < b[i];++j){
				cout <<i;
			}
		}
		cout <<"\n";
	}
}
