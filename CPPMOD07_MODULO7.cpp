#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=1;i<=a[n-1];i++){
			int d=a[0]%i;
			int dem=0;
			for(int j=1;j<n;j++){
				if(a[j]%i==d) dem++;
				else break;
			}
			if(dem==n-1) s++;
		}
		if(n==1) cout<<0<<endl;
		else cout<<s<<endl;
	}
}