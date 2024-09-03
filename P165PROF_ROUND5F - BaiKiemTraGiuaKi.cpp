#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int b[1000008];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;cin >> n;
	int a[n];
	for(int i = 0;i < n;++i){
		cin >> a[i];
		b[a[i]]++;
	}
	int res = 0;
	for(int i = 1000000-res;i>=1;--i){
		if(b[i]){
			for(int j = i -res- 1;j>=1;--j){
				if(b[j]){
					if(i % j > res) res = i % j;
				}
			}
		}
	}
	cout << res;   
}
