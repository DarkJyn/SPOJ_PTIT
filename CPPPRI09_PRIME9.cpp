#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=sqrt(n);i++){
			int s=0;
			while(n%i==0){
				s++;
				n/=i;
			}
			if(s>0) cout<<i<<" "<<s<<" ";
		}
		if(n>1) cout<<n<<" 1";
		cout<<endl;
	}
}