#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main (){
    int t;
    cin>>t;
    while(t--){
    	ll n;
    	cin >> n;
        int lens = sqrt(n);
    	for(int i = 2;i <=lens;++i){
    		while( n % i ==0){
    			cout << i <<" ";
    			n /= i;
			}
		}
		if(n>1) cout << n;
		cout <<"\n";
	}
}