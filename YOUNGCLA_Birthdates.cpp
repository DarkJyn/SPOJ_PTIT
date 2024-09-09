#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct person{
    string name;
    int ngay;
    int thang;
    int nam;
    friend istream& operator >> (istream& nhap , person &x){
        nhap >> x.name >> x.ngay >> x.thang>>  x.nam;
        return nhap;
    }
    friend ostream& operator << (ostream& xuat, person x){
        xuat << x.name;
        return xuat;
    }
};
bool cmp(person a, person b){
    if(a.nam == b.nam && a.thang == b.thang) return a.ngay < b.ngay;
    else if(a.nam == b.nam) return a.thang < b.thang;
    return a.nam < b.nam; 
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n; cin >> n;
    person list[n];
    for(int i = 0 ; i < n;++i){
        cin >>list[i];
    }
    sort(list,list+n,cmp);
    cout << list[n-1] <<"\n"<<list[0];
    return 0;
}