#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int save[10000];
int Do(int a){
    if(a==0||a==4||a==7) return 1;
    else if(a==1||a==8) return 2;
    else if(a==5) return 3;
    else if(a==2) return 4;
    else if(a==9) return 5;
    else if(a==6) return 6;
    else if(a==3) return 8;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a,b,s;
	cin >> a >> b;
	for(int i = a+1;i < 63;++i){
		if(i==46||i==56) s=7;
        else if(i==53) s==9;
        else s=Do(i%10);
        if(s==b){
            cout<<i;
            return 0;
        }
	}
	cout << "0";
} 