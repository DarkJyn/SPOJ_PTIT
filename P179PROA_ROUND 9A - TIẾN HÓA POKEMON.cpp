#include <bits/stdc++.h>
using namespace std;
struct poke{
    string name;
    int cost;
    int store;
    int cnt;
    int id;
};
bool cmp (poke a, poke b){
    if(a.cnt == b.cnt) return a.id > b.id;
    return a.cnt < b.cnt;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;cin >> n;
    poke list[n];
    for(int i = 0;i < n;++i){
        list[i].id  = i;
        cin >> list[i].name >> list[i].cost >> list[i].store;
    }
    int res = 0;
    for(int i = 0;i < n;++i){
        list[i].cnt = 0;
        while(list[i].store >= list[i].cost){
            res++;
            list[i].cnt++;
            list[i].store = list[i].store - list[i].cost + 2;
        }
    }
    sort(list,list + n,cmp);
    cout << res <<"\n"<<list[n-1].name;
}