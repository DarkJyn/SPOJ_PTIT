#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)-> sync_with_stdio(false);
 	int n,x;
    cin>>n;
    int s = 0;
    for(int i=1;i<=12;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) x=31;
        else if(i==2){
            if((n%4==0&&n%100!=0)||n%400==0) x=29;
            else x=28;
        }
        else x=30;
        for(int j=1;j<=x;j++){
            s=s+(j/10)+(j%10)+(i/10)+(i%10)+n/1000+(n/100)%10+(n/10)%10+n%10;
        }
    }
    cout<<s;
}