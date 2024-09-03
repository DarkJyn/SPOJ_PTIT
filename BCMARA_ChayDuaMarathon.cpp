#include <bits/stdc++.h>
using namespace std;
struct mtime{
    int gio;
    int phut;
    int giay;
    friend istream& operator >> (istream& nhap , mtime &x){
        nhap >> x.gio >> x.phut >> x.giay;
        return nhap;
    }
    friend ostream& operator << (ostream& xuat , mtime  a){
        xuat << a.gio <<" " <<  a.phut<<" "<<a.giay;
        return xuat;
    }
};
bool cmp(mtime a, mtime b){
    if(a.gio == b.gio && a.phut == b.phut) {
        return a.giay < b.giay;
    }
    if(a.gio == b.gio) return a.phut < b.phut;
    return a.gio < b.gio;
}
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n;
    cin >> n;
    struct mtime list[n+5];
    for (int i = 0; i<n;++i){
        cin >> list[i];
    }
    sort(list,list+n,cmp);
    for (int i = 0; i<n;++i){
        cout << list[i]<<"\n";
    }
    return 0;
}