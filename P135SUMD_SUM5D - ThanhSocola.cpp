#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int k;
	cin >> k;
	int total = 1;
	while(total < k){
		total *= 2;
	}
	int d = total;
	if(total == k){
		cout << total <<" 0";
		return 0;
	}
	int cnt = 0;
	while(k!=0){
		if(k >= total/2){
			k -= total / 2;
			cnt++;
			total /= 2;
		}
		else{
			total /= 2;
			cnt++;
		}
	}
	cout << d<< " "<<cnt;

} 