#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int c1=0,d1=0,c2=0,d2=0;
	for(int i=0;i<a.length();i++){
		if(a[i]=='6') a[i]='5';
		c1=c1*10+a[i]-48;
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='6') b[i]='5';
		c2=c2*10+b[i]-48;
	}
	c1+=c2;
	for(int i=0;i<a.length();i++){
		if(a[i]=='5') a[i]='6';
		d1=d1*10+a[i]-48;
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='5') b[i]='6';
		d2=d2*10+b[i]-48;
	}
	d1+=d2;
	cout<<c1<<" "<<d1;
}