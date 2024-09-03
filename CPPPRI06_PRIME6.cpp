#include <bits/stdc++.h>
using namespace std;
int prime[100000];
void sang(){
	for(int i=2;i*i<=10001;i++){
		if(prime[i]==0){
			for(int j=i*i;j<=10001;j+=i){
				prime[j]=1;
			}
		}
	}
	for(int i=2;i<=10001;i++){
		if(prime[i]==0) prime[i]=i;
	}
}
int main(){
	int t;
	cin >> t;
	sang();
	while(t--){
		int n;
		cin >> n;
		for(int i=2;i<=n/2;i++){
			if(prime[i] == i && prime[n-i] == n-i){
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
	}
}