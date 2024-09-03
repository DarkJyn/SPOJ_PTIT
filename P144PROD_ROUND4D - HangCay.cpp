#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
	if(a.size()!=b.size()){
		return a.size()<b.size();
	}
	else return a<b;
}
int main(){
	int n,t=1;
	while(cin>>n){
		if(n==0) return 0;
		vector <string> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			while(a[i][0]=='0') a[i].erase(0,1);
		}
		sort(a.begin(),a.end(),cmp);
		string s=a[0];
		int ok=1;
		for(int i=1;i<n;i++){
			if(a[i]!=s){
				ok=0;
				break;
			}
		}
		cout<<"Case "<<t<<": ";
		t++;
		if(ok==0) cout<<a[0]<<" "<<a[n-1]<<endl;
		else cout<<"There is a row of trees having equal height.\n";
	}
}