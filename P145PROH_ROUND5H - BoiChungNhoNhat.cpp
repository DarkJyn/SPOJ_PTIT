#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;

long long ucln(long long a, long long b) {
    while(b!=0){
        long long x=a%b;
        a=b;
        b=x;
    }
    return a;
}
long long bcnn(long long a, long long b) {
    long long x=ucln(a,b);
    return (a*b)/x;
}
int main(){
	long long n,s=0;
	cin>>n;
	if(n==1) cout<<"1";
	else if(n==2) cout<<"2";
	else if(n<200){
		for(long long i=1;i<n-1;i++){
			for(long long j=i+1;j<n;j++){
				for(long long k=j+1;k<=n;k++){
					if(bcnn(i,bcnn(j,k))>s) s=bcnn(i,bcnn(j,k));
				}
			}
		}
		cout<<s;
    }
    else{
        for(long long i=n-199;i<n-1;i++){
			for(long long j=i+1;j<n;j++){
				for(long long k=j+1;k<=n;k++){
					if(bcnn(i,bcnn(j,k))>s) s=bcnn(i,bcnn(j,k));
				}
			}
		}
		cout<<s;
    }
}