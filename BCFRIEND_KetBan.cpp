#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,b,s=0;
	cin>>n>>b;
	long long a[n];
	map <long long,long long> m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(b==2*a[i]&&m[a[i]]>1){
			s+=m[a[i]]*(m[a[i]]-1)/2;
			m[a[i]]=0;
		}
		else if(m[b-a[i]]>0){
			s+=m[a[i]]*m[b-a[i]];
			m[a[i]]=0;
			m[b-a[i]]=0;
		}
	}
	cout<<s;
}