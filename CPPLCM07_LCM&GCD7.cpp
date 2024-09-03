#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
#define endl "\n"

ll bcnn(ll a, ll b){
	ll x=a*b;
	while(b!=0){
        ll x=a%b;
        a=b;
        b=x;
    }
    return x/a;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
	cin>>t;
	while(t--){
		ll x,y,z,n;
		cin>>x>>y>>z>>n;
		ll s=pow(10,(n-1));
		ll k=bcnn(x,bcnn(y,z));
		if(k>=s*10) cout<<-1<<endl;
		else{
			cout<<k*(ll)ceil(pow(10,n-1)/k)<<endl;
		}
	}
}