#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define MOD 1000000007;

int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
	int n; cin >> n;
	ll a[n];
	ll suml[n];
	ll sumr[n];
	ll sum = 0;
	for(int i = 0;i < n;++i){
		cin >> a[i];
		sum += a[i];
	}
	suml[0] = a[0];
	for(int i = 1;i < n;++i){
		suml[i] = a[i] + suml[i-1]; 
	}
	sumr[0] = a[n-1];
	int index = 1;
	for(int i = n-2;i >= 0;i--){
		sumr[index] = a[i] + sumr[index-1]; 
		index++;
	}
	index = 0;
	int index1 = 0;
	int cnt1=0;
	int cnt2=0;
	for(int i = 1;i <= sum;++i){
		if(i >= suml[index]){
			cnt1++;
			index++;
			if(cnt1 + cnt2 == n){
				cout << cnt1 << " "<<cnt2;
				return 0;
			}
		}
		if(i >= sumr[index1]){
			cnt2++;
			index1++;
				if(cnt1 + cnt2 == n){
				cout << cnt1 << " "<<cnt2;
				return 0;
			}
		}
	}
	return 0;
}