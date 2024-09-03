#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a,b,c;
	cin >> a >> b >> c;
	int cost = 0;
	int save[3][2];
	for(int i = 0;i < 3;++i){
		cin >> save[i][0] >> save[i][1];
	}
	int res[105]={};
	for(int i = 0; i < 3;++i){
		for(int j = save[i][0];j <save[i][1];++j ){
			res[j]++;
		}
	}
	for(int i = 0; i < 105;i++){
		if(res[i] == 3) cost += 3*c;
		else if(res[i] == 2) cost += 2*b;
		else if(res[i] == 1) cost += a;
	}
	cout << cost;
}