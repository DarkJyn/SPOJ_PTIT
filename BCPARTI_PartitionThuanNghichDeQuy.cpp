#include <iostream>
using namespace std;
int main(){
	int t,pos=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		a[1]=1;a[2]=2;
		for(int i=3;i<=n;i++){
			int s=1;
			for(int j=1;j<=i/2;j++){
				s+=a[j];
			}
			a[i]=s;
		}
		cout<<pos<<" "<<a[n]<<endl;
		pos++;
	}
}