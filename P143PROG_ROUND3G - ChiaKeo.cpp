#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int h=k/(n-1);
	if(k % (n-1) == 0){
		cout<<k+h-1<<" "<<h+k;
	}
	else{
		cout<<h+k<<" "<<h+k;
	}
}