#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

struct diem{
	ll a,b;
};
bool cmp(diem a, diem b){
	return a.b < b.b;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll n,r;
	ll avg;
	cin >> n >> r >> avg;
	diem list[n];
	avg = n*avg;
	ll tmp = 0;
	for(int i  = 0;i < n;++i){
		cin >> list[i].a >> list[i].b;
		tmp = tmp + list[i].a;
	}
	sort(list,list+n,cmp);
	ll cnt = 0;
	ll index = 0;
	while(tmp < avg){
		ll res = r - list[index].a;
		if(tmp + res > avg){
			res = avg - tmp;
		}
		cnt += res * list[index].b;
		tmp += res;
		index++;
	}
	cout << cnt;
}