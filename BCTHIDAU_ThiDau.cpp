#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,maxac=0,minpen=1000000;
	cin>>t;
	string s;
	while(t--){
		string b;
		cin>>b;
		int a[4][2],ac=0,pen=0;
		for(int i=0;i<4;i++){
			cin>>a[i][0]>>a[i][1];
		}
		for(int i=0;i<4;i++){
			if(a[i][1]!=0){
				ac++;
				pen+=(a[i][0]-1)*20+a[i][1];
			}
		}
		if(ac>maxac){
			maxac=ac;
			minpen=pen;
			s=b;
		}
		else if(ac==maxac){
			if(minpen>pen){
				minpen=pen;
				s=b;
			}
		}
	}
	cout<<s<<" "<<maxac<<" "<<minpen;
}