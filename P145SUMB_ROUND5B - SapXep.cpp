#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n,s1=0,s2=0;
	cin>>n>>m;
	int a[n],b[m][2];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==-1) s1++;
		else if(a[i]==1) s2++;
	}
	for(int i=0;i<m;i++){
		cin>>b[i][0]>>b[i][1];
	}
	sort(a,a+n);
	for(int i=0;i<m;i++){
		int k=b[i][1]-b[i][0]+1;
		if(k%2==1) cout<<"0"<<endl;
		else{
			k/=2;
			if(k>s1||k>s2) cout<<"0"<<endl;
			else cout<<"1"<<endl;
		}
	}
}