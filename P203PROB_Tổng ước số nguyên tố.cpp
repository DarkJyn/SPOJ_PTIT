#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int a[1000002];
void Era(){
	for (int i = 2; i * i <= 1e6 + 1; i++){
		if (a[i] == 0){
			for (int j = i * i; j <= 1e6 + 1; j += i){
				if (a[j] == 0){
					a[j] = i;
				}
			}
		}
	}
	for (int i = 2; i <= 1e6 + 1; i++){
		if (a[i] == 0)
			a[i] = i;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	Era();
	long long s = 0;
	while (t--){
		int b;
		cin >> b;
		while (b != 1){
			s += a[b];
			b /= a[b];
		}
	}
	cout << s;
}