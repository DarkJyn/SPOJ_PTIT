#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int prime[100000];
vector<int> b;
vector<int> pos(10005);
void sang(){
	for(ll i=2;i<=10001;i++){
		if(prime[i]==0){
			b.push_back(i);
			for(ll j=i*i;j<=10001;j+=i){
				prime[j]=1;
			}
		}
		pos[i]=b.size()-1;
	}
}
int main(){
	int t;
	cin>>t;
	sang();
	while(t--){
		int l,r;
		cin >> l >> r;
	    if(l > r) swap(l,r);
	    for(int i = pos[l];i<=pos[r];i++){
	    	if(b[i]>=l && b[i]<=r) cout<<b[i]<<" ";
		}
	    cout<<endl;
	}
	return 0;
}