#include <bits/stdc++.h>
using namespace std;
int main(){
	long long y,k,n,ok=1;
	cin>>y>>k>>n;
	int h=y/k;
	h++;
	h*=k;
	for(int i=h;i<=n;i+=k){
		ok=0;
		cout<<i-y<<" ";
	}
	if(ok==1) cout<<"-1";
}