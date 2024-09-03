#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int check(int a,int b,int c){
	if(a + b > c && b + c > a && a + c > b) return 1;
	else return 0;
}
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a,a+4);
	int ok = 0;
	int res = 0;
	if(a[0]+a[1] == a[2] || a[0]+a[1] == a[3]|| a[1] + a[2] == a[3]) res = 1;
	for(int i = 0;i <=1;++i){
		if(check(a[i],a[i+1],a[i+2])) ok = 1;
	}
	if(ok == 1) cout <<"TRIANGLE";
	else if(res == 1) cout<<"SEGMENT";
	else cout << "IMPOSSIBLE";
}
