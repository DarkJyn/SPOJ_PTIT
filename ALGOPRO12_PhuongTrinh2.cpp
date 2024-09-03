#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
    int s = 1;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			int k = 0;
			while (n % i == 0){
				n /= i;
				k++;
			}
			s *= 2 * k + 1;
		}
	}
	if (n > 1)
		s *= 3;
	cout << s;
}