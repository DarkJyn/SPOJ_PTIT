#include <bits/stdc++.h>
using namespace std;
long long ucln(string a, long long b){
	long long c=0;
	for(int i=0;i<a.length();i++) c=(c*10+a[i]-48)%b;
    while(b!=0){
        long long x=c%b;
        c=b;
        b=x;
    }
    return c;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string b;
		long long a;
		cin>>a>>b;
		cout<<ucln(b,a)<<endl;
	}
}