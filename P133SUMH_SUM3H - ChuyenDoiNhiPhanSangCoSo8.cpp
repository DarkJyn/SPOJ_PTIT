#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c="";
	cin>>a;
	int k=a.size()%3;
	if(k==0) k=3;
	a.insert(0,(3-k),'0');
	for(int i=0;i<a.size();i+=3){
		b="";
		b+=a[i];
		b+=a[i+1];
		b+=a[i+2];
		if(b=="000") c=c+'0';
		else if(b=="001") c=c+'1';
		else if(b=="010") c=c+'2';
		else if(b=="011") c=c+'3';
		else if(b=="100") c=c+'4';
		else if(b=="101") c=c+'5';
		else if(b=="110") c=c+'6';
		else if(b=="111") c=c+'7';
	}
	cout<<c;
}