#include <bits/stdc++.h>
using namespace std;
vector<bool> a(1000000005,0);
void tg(){
	for(int i=1;i<=44720;i++){
		a[i*(i+1)/2]=1;
	}
}
int main(){
	int n;
	cin>>n;
	tg();
	for(int i=1;i<=n/2;i++){
		if(a[i]==1&&a[n-i]==1){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}