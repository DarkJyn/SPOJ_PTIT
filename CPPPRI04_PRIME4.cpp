#include<bits/stdc++.h>
using namespace std;
int prime[10005];
void sang(){
    for (int i = 2;i*i<=10001;i++){
        if (prime[i]==0){
            for (int j = i*i;j<=10001;j+=i){
                if (prime[j] == 0){
                    prime[j]=i;
                }
            }
        }
    }
    for (int i = 2;i<=10001;i++){
        if (prime[i]==0) prime[i]=i;
    }
}
int main (){
    int t;
    cin>>t;
    sang();
    prime[1]=1;
    while(t--){
    	int n;
    	cin>>n;
    	for(int i=1;i<=n;i++){
    		cout<<prime[i]<<" ";
		}
		cout<<"\n";
	}
}