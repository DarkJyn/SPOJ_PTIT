#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mark[105][105];
int n,m;
char a[105][105];
void setgiatri(int i, int j){
	mark[i][j] = 0;
	if(mark[i][j-1] == 1) setgiatri(i,j-1);
	if(mark[i][j+1] == 1) setgiatri(i,j+1);
	if(mark[i+1][j] == 1) setgiatri(i+1,j);
	if(mark[i-1][j] == 1) setgiatri(i-1,j);
	if(mark[i+1][j+1] == 1) setgiatri(i+1,j+1);
	if(mark[i-1][j-1] == 1) setgiatri(i-1,j-1);
	if(mark[i-1][j+1] == 1) setgiatri(i-1,j+1);
	if(mark[i+1][j-1] == 1) setgiatri(i+1,j-1);
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);

	cin >> n >> m;
	char a[n][m];
	for(int i = 0; i < n;++i){
		for(int j = 0; j < m;++j){
			cin >> a[i][j];
			if(a[i][j] == 'W'){
				mark[i][j] = 1;
			}
		}
	}
	int pos = 0;
	for(int i = 0; i < n;++i){
		for(int j = 0; j < m;++j){
			if(mark[i][j] == 1){
				setgiatri(i,j);
				pos++;  
			}
		}
	}
	cout<<pos;
}