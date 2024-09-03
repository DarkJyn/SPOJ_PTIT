#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int cnt = 0;
	for(int i=n-1;i>=0;i--){
		int x= s/ a[i];
		s -= a[i]*x;
		cnt+=x;
	}
	cout<< cnt;
}