#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
	string c=a+b;
	string d=b+a;
	return c>d;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		vector<string> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end(),cmp);
		for(int i=0;i<n;i++) cout<<a[i];
		cout<<endl;
	}
}