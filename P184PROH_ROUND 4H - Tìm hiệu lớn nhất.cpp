#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct a{
	int id;
	int vl;
};
bool cmp(a x, a y){
	return x.vl < y.vl;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
	a arr[n];
	for(int i = 0;i < n;++i){
		arr[i].id = i;
		cin >> arr[i].vl;
	}
	sort(arr,arr+n,cmp);
	int t = 0;
	for(int i = 0;i<n;++i){
		for(int j = n-1;j >=0;--j){
			if(arr[j].id > arr[i].id){
				t = max(t,arr[j].vl - arr[i].vl);
				break;
			}
		}
	}
	cout << t;
}
