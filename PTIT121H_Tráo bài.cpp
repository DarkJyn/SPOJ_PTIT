#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int m,k;
	cin >> m >> k;
	string s;cin >> s;
	int a[m+s.size()+5];
	for(int i = 0;i < m;++i){
		a[i] = i;
	}
	int beg = 0;
	int end = m;
	for(int j = 0;j < s.size()-1;++j){
		if(s[j] == 'A'){
			a[end] = a[beg];
			beg++;
			end++;
		}
		else if(s[j] == 'B'){
			a[end] = a[beg+1];
			a[beg+1] = a[beg];
			beg++;
			end++;
		}
	}

	cout << a[beg+k-1] << " "<< a[beg+k]<< " " <<a[beg+k+1];
}
