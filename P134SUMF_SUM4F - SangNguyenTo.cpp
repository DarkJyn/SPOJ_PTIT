#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	int n,k,s=0;
	cin>>n>>k;
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			for(int j=i;j<=n;j+=i){
				if(a[j]==0){
					a[j]=1;
					s++;
				}
				if(s==k){
					cout<<j;
					return 0;
				}
			}
		}
	}
}