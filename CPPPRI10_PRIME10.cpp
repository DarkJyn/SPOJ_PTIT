#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,s1=0,s2=0,ok=1;
		cin>>n;
		long long m=n,k=m;
		for(int i=2;i<=sqrt(n);i++){
			int k=i,s3=0;
			if(n%i==0){
				while(k!=0){
					s3+=k%10;
					k/=10;
				}
			}
			while(n%i==0){
				s1+=s3;
				n/=i;
			}
		}
		if(n>1){
			while(n!=0){
				s1+=n%10;
				n/=10;
			}
		}
		while(m!=0){
			s2+=m%10;
			m/=10;
		}
		for(int i=2;i<=sqrt(k);i++){
			if(k%i==0){
				ok=0;
				break;
			}
		}
		if(s1==s2&&ok==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
}