#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s=0;
		cin>>n;
		vector<int>a;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n/=i;
				a.push_back(i);
			}
		}
		if(n>1) a.push_back(n);
		if(a.size() == 3 && a[0]!=a[1] && a[1]!=a[2] && a[0]!=a[2]) cout<<"1\n";
		else cout<<"0\n";
	}
}