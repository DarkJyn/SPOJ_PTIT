#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int mark[1005]; 
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n,m,k;
	cin >> n >> m >> k;
	int pos[m];
	for(int i = 0;i < m;++i){
		cin >> pos[i];
		int beg = pos[i] - k;
		if(pos[i] < k) beg = 0;
		for(int j = beg;j <= pos[i]+k;++j ){
			mark[j] = 1;
		}
	}
	int cnt = 0;
	int res = 0;
	for(int i = 1;i <= n;++i){
		if(mark[i] == 0) {
			cnt++;
			if(i == n){
				res+= ceil((float)cnt/(2*k));
	
			}
		}
		else{
			res += ceil(cnt/(2*k));
			cnt = 0;
		} 
		
	}
	cout <<res ;
}