#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n];
	int sum[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	sort(a,a+n);
	sum[0] = a[0];
	for(int i = 1;i < n;++i){
		sum[i] = sum[i-1]+a[i];
	}
	int res = 0;
	int mark = 0;
	for(int i = 0;i < n;++i){
		if(sum[i]<=300){
			res += sum[i];
			mark++;
		}
	}
	cout << mark <<" "<<res;
}