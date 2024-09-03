#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		long long l,r,s=0;
		cin>>l>>r;
		vector <int> a(r-l+1,1);
		for(long long i=2;i*i<=r;++i){
	    	for(long long j=max(i*i,(l+i-1)/i*i);j<=r;j+=i){
		        a[j-l]=0;
		    }
		}
		if(l<=1) a[1-l]=0;
		for(int i=l;i<=r;i++) if(a[i-l]) s++;
		cout<<s<<"\n";
	}
}