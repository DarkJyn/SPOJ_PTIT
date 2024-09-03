#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int prime[100005];
vector<int> tmp;
void sang(){
	for(ll i=2;i*i<=100000;i++){
		if(prime[i] == 0){
			for(ll j=i*i;j<=100000;j+=i){
				prime[j] = 1;
			}
		}
	}
    for(int i = 2;i <= 100000;++i){
        if(prime[i] == 0) tmp.push_back(i);
    }
}
int main(){
	int t;
	cin >> t;
	sang();
	while(t--){
		int n,i=0;
		cin >> n;
		while(tmp[i]<=n){
			cout<<tmp[i]<<" ";
			i++;
		}
		cout<<"\n";
	}
}