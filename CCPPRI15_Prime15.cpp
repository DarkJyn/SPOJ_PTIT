#include<bits/stdc++.h>
using namespace std;
int a[1000005]={};
void Era(){
	a[1]=1;
    for (int i = 2;i*i<=1e6+1;i++){
        if (a[i]==0){
            for (int j = i*i;j<=1e6+1;j+=i){
                if (a[j]==0){
                    a[j]=i;
                }
            }
        }
    }
    for (int i = 2;i<=1e6+1;i++){
        if (a[i]==0) a[i]=i;
    }
}
int main (){
    int t;
    cin>>t;
    Era();
    while(t--){
    	int n;
    	cin>>n;
    	for(int i=1;i<=n;i++){
    		cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}