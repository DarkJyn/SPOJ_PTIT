#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int save[10000];
void sang(){
	save[0] = 1;
	save[1] = 1;
	int a = 0;
	int b = 1;
	while(b <= 1000){
		int c = a + b;
		save[c] = 1;
		b = a;
		a = c;
	}
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	sang();
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n];
		for(int i =0;i < n;++i){
			cin >> a[i];
		}
		for(int i =0;i < n;++i){
			if(save[a[i]] == 1) cout << a[i]<<" ";
		}
		cout <<"\n";
	}
} 