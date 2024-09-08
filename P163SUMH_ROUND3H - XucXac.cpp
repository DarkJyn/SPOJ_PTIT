#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int mark[5005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a,b;
	cin >> a >> b;
	int cnt1=0;
	int cnt2= 0;
	int cnt3=0;
	for(int i = 1;i <=6;++i){
		if(abs(i - a) < abs(i-b)) cnt1++;
		else if(abs(i - a) == abs(i-b)) cnt2++;
		else cnt3++;
	}
	cout << cnt1<<" "<<cnt2<<" "<<cnt3;
}
