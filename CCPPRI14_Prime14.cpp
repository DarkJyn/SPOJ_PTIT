#include <bits/stdc++.h>
using namespace std;
vector<int> a(1000005,1);
vector<int> b;
void era(){
	for(int i=2;i*i<=1000001;i++){
		if(a[i]==1){
			for(int j=i*i;j<=1000001;j+=i){
				a[j]=0;
			}
			b.push_back(i);
		}
	}
}
int main(){
	int t;
	cin>>t;
	era();
	while(t--){
		int n,i=0;
		cin>>n;
		while(b[i]*b[i]<=n){
			cout<<b[i]*b[i]<<" ";
			i++;
			if(i>=b.size()) break;
		}
		cout<<endl;
	}
}