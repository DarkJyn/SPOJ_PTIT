#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m,ok=1;
		cin>>a>>m;
		for(int i=0;i<m;i++){
			if(a*i%m==1){
				ok=0;
				cout<<i<<endl;
				break;
			}
		}
		if(ok==1) cout<<"-1\n";
	}
}