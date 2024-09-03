#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int save[150];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	int a[n];
	int b[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
	}
	for(int i = 0;i < n;++i){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int cnt = 0;
	int index = 0;
	for(int i = 0;i < n;++i){
		if(b[index]>a[i]){
			cnt++;
			index++;
		}
		else{
			while(b[index]<a[i]){
				index++;
				if(index == n) break;
			}
			if(b[index] > a[i]){
				cnt++;
				index++;
			}

		}
		if(index == n) break;
	}
	cout << cnt;
} 