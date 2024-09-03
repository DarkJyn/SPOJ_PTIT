#include <bits/stdc++.h>

using namespace std;

struct mb{
	string fath;
    string son;
	int delta, tuoi;	
    friend istream& operator >> (istream& nhap , mb &a){
        nhap >> a.fath >> a.son >> a.delta;
        return nhap;
    }
}a[105];
int n;
void solve(string name, int age){
    for(int i = 0; i < n; i++){
        if(name == a[i].fath){
            a[i].tuoi = age - a[i].delta;
            solve(a[i].son,a[i].tuoi);
        }
    }
}
bool cmp(mb a, mb b){
    if(a.tuoi == b.tuoi) return a.son < b.son;
    else return a.tuoi > b.tuoi; 
}
int main(){
    int test;
    cin >> test;
    for(int k = 1;k<=test;++k){
        cin >> n;
        for(int i = 0; i < n ;++i){
            cin >> a[i];
        }
        solve("Ted",100);
        sort(a,a+n,cmp);
        cout <<"DATASET "<<k<<"\n";
        for(int i = 0;i<n;++i){
            cout << a[i].son << " " << a[i].tuoi << "\n";
        }
    }
}
