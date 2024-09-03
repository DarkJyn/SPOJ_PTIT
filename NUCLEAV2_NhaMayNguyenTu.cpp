#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
struct toado{
	double x,y;
	double kc1;
	double kc2;
};

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	toado list[n];
	for(int i = 0; i < n;++i){
		cin >> list[i].x >> list[i].y;
	}
	toado fac1,fac2;
	cin >> fac1.x >> fac1.y >> fac2.x >> fac2.y;
	for(int i = 0;i < n;++i){
		list[i].kc1 = sqrt((list[i].x-fac1.x)*(list[i].x-fac1.x) + (list[i].y - fac1.y) * (list[i].y - fac1.y));
		list[i].kc2 = sqrt((list[i].x-fac2.x)*(list[i].x-fac2.x) + (list[i].y - fac2.y) * (list[i].y - fac2.y));
	}
	int q;cin >> q;
	while(q--){
		int r1,r2;
		cin >> r1 >> r2;
		int cnt = 0;
		for(int i = 0;i < n;++i){
			if(list[i].kc1 <= r1 || list[i].kc2 <= r2) cnt++; 	
		}
		cout << cnt<<"\n";
	}
}