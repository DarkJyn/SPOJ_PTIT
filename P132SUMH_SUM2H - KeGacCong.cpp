#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mark[1005];
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int dbeg1,dend1,dbeg2,dend2;
	cin >> dbeg1 >> dend1 >> dbeg2 >> dend2;
	int p,m,g;
	cin >> p >> m >> g;
	int j = 1;
	while(j < 1000){
		for(int i = j;i < dbeg1 + j;++i){
			mark[i]++;
		}
		j+= dbeg1 + dend1;
	}
	j = 1;
	while(j < 1000){
		for(int i = j;i < dbeg2 + j;++i){
			mark[i]++;
		}
		j+= dbeg2 + dend2;
	}
	if(mark[p] == 2) cout <<"both\n";
	else if(mark[p]== 1) cout <<"one\n";
	else if(mark[p] == 0) cout << "none\n";
	if(mark[m] == 2) cout <<"both\n";
	else if(mark[m]== 1) cout <<"one\n";
	else if(mark[m] == 0) cout << "none\n";
	if(mark[g] == 2) cout <<"both\n";
	else if(mark[g]== 1) cout <<"one\n";
	else if(mark[g] == 0) cout << "none\n";

}