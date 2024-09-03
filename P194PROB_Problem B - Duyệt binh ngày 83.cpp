#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
	cin >> n;
	int a[n];
    int ma = 0, mi = 1000;
    int pos1, pos2;
	for (int i = 0; i < n; i++){
		cin >> a[i];
    }
	for (int i = 0; i < n; i++){
		if (a[i] <= mi){
			mi = a[i];
			pos1 = i;
		}
	}
	for (int i = n - 1; i >= 0; i--){
		if (ma <= a[i]){
			ma = a[i];
			pos2 = i;
		}
	}
	if (ma == mi){
		cout << "0";
    }
	else{
		if (pos1 < pos2){
			cout << n - pos1 - 2 + pos2;
        }
		else{
			cout << n - pos1 - 1 + pos2;
        }
	}   
}