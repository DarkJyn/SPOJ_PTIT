#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][2],b[n],s=100000000;
	for(int i=0;i<n;i++){
		b[i]=0;
		cin>>a[i][0]>>a[i][1];
	}
	b[n-1]=1;
	while(1){
		int s1=1,s2=0,ok=0;
		for(int i=0;i<n;i++)
			if(b[i]==1){
				s1*=a[i][0];
				s2+=a[i][1];
			}
		s=min(s,abs(s2-s1));
		for(int i=n-1;i>=0;i--){
			if(b[i]==0){
				ok=1;
				b[i]=1;
				for(int j=i+1;j<n;j++) b[j]=0;
				break;
			}
		}
		if(ok==0) break;
	}
	cout<<s<<endl;
}