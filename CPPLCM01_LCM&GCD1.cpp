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
long long bcnn(long long a, long long b) {
    long long x=ucln(a,b);
    return (a*b)/x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	long long a,b;
    	cin>>a>>b;
    	cout<<bcnn(a,b)<<" "<<ucln(a,b)<<endl;
    }
}