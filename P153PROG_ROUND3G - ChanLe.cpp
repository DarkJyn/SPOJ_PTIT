#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	long long n, k;
	cin >> n >> k;
	if (n % 2 == 0){
		if (k <= n / 2)
			cout << 2 * k - 1;
		else
			cout << 2 * k - n;
	}
	else{
		if (k <= n / 2 + 1)
			cout << 2 * k - 1;
		else
			cout << 2 * k - n - 1;
	}
}
