#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin >> m >> n;
	char a[m+2][n+2];
	for(int i=1;i <= m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int cnt = 0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='#'){
				a[i][j]='.';
				if(a[i][j+1]=='#') a[i][j+1]='.';
				else if(a[i][j-1]=='#') a[i][j-1]='.';
				else if(a[i+1][j]=='#') a[i+1][j]='.';
				else if(a[i-1][j]=='#') a[i-1][j]='.';
				cnt++;
			}
		}
	}
	cout<<cnt;
}