#include <bits/stdc++.h>
using namespace std;
int sumofdigits(int n){
	int sum = 0;
	while(n!=0){
		sum += n %10;
		n /= 10;
	}
	return sum;
}
int main(){
	cin.tie(nullptr) -> sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >>n;
		while(n >= 10){
			n = sumofdigits(n);
		}
		cout << n<<"\n";
	}
}