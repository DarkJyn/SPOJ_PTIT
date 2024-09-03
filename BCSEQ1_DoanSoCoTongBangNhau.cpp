#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define endl "\n"

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n;
		cin >> m >> n;
		ll s=0;
        ll a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			s += a[i];
		}
		vector <ll> b;
		ll k=sqrt(s);
		if( k*k == s) b.push_back(k);
		for(int i=1;i<k;i++){
			if(s % i == 0){
				b.push_back(i);
				b.push_back(s/i);
			}
		}
		sort(b.begin(),b.end());
		for(int i = 0 ; i < b.size() ;i++){
			ll ss=0;
			for(int j=0;j<n;j++){
				ss += a[j];
				if ( ss > b[i]) break;
				else if(ss==b[i]) ss=0;
			}
			if(ss==0){
				cout << m<< " " << b[i] << endl;
				break;
			}
		}
	}
}