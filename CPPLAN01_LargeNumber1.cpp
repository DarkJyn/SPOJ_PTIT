#include <bits/stdc++.h>
using namespace std;
string tru(string a,string b){
	int temp=0;
	string s="";
	if(a.size()>b.size()) b.insert(0,a.size()-b.size(),'0');
	else if(a.size()<b.size()) a.insert(0,b.size()-a.size(),'0');
	if(b>a){
		string c=a;
		a=b;
		b=c;
	}
	for(int i=a.size()-1;i>=0;i--){
		temp=a[i]-b[i]-temp;
		if(temp<0){
			temp+=10;
			s.insert(0,1,temp+48);
			temp=1;
		}
		else{
			s.insert(0,1,temp+48);
			temp=0;
		}
	}
	return s;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a,b;
		cin>>a>>b;
		cout<<tru(a,b)<<endl;
	}
}