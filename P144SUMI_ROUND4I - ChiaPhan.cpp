#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b) {
    while(b!=0){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
int bcnn(int a, int b) {
    int x=ucln(a,b);
    return (a*b)/x;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int a,b;
	cin>>a>>b;
	int k=bcnn(a,b);
	int phan=k/b,ptb=k/a,s=0,x=0;
	for(int i=1;i<=b;i++){
		while(x<phan){
			x+=ptb;
		}
		if(x==phan) x=0;
		else{
			s++;
			x-=phan;
		}
	}
	cout<<s;
}