#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],j1=n-1,j2=0,b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i+=2) b[i]=a[j1--];
		for(int i=1;i<n;i+=2) b[i]=a[j2++];
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}