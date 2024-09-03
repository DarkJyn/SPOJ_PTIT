#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	double a,b,c,d;
	cin >> a>>b>>c>>d;
	double res0 = abs((a/c)-(b/d));
	double res1 = abs((c/d)-(a/b));
	double res2 = abs((d/b)-(c/a));
	double res3 = abs((b/a)-(d/c));
	double tmp = max(res0,max(res1,max(res2,res3)));
	if(tmp == res0) cout <<"0";
	else if(tmp == res1) cout <<"1";
	else if(tmp == res2) cout <<"2";
	else cout <<"3";

}