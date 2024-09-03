#include <bits/stdc++.h>
using namespace std;
struct cha{
    char c;
    int id;
};
bool cmp (cha a, cha b){
    if(a.c == b.c) return a.id < b.id;
    return a.c > b.c;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    cin >> s;
    cha list[s.size()];
    for(int i = 0;i < s.size();++i){
        list[i].c = s[i];
        list[i].id = i;
    }
    sort(list,list + s.size(),cmp);
    int idx = -1;
    for(int i = 0;i < s.size();++i){
        if(list[i].id > idx){
            cout << list[i].c;
            idx = list[i].id;
        }
    }

}
