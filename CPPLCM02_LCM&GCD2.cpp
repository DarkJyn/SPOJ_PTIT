#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b) {
    while(b!=0){
        long long x=a%b;
        a=b;
        b=x;
    }
    return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,s=1;
		cin>>n;
		for(long long i=1;i<=n;i++){
			long long k= ucln(i,s);
			if(k>1){
				s*=i/k;
			}
			else s*=i;
		}
		cout<<s<<endl;
	}
}