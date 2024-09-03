#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;
struct stu{
    int value;
    int id;
};
bool cmp(stu a,stu b){
    if(a.value == b.value) return a.id < b.id;
    return a.value > b.value;
}
bool cmp2(stu a,stu b){
    return a.id < b.id;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
    int n,k;
    cin >> n >> k;
    stu a[n];
    for(int i = 0;i < n;++i){
        cin >> a[i].value;
        a[i].id = i;
    }
    sort(a,a+n,cmp);
    cout << a[k-1].value<<"\n";
    vector <stu> v;
    for(int i = 0;i < k;++i){
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end(),cmp2);
    for(int i = 0;i < k;++i){
        cout << v[i].id + 1 <<" ";
    }
}