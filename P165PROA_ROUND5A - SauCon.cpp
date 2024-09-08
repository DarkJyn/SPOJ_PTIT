#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct chucai{
    char c;
    int index;
};
bool cmp(chucai a, chucai b){
    if(a.c == b.c) return a.index < b.index;
    return a.c > b.c;
}
int main(){
    string s;cin >> s;
    chucai list[s.size()];
    for(int i = 0;i < s.size();++i){
        list[i].index = i;
        list[i].c = s[i];
    }
    sort(list,list + s.size(),cmp);
    int tmp = -7;
    for(int i = 0;i < s.size();++i){
        if(list[i].index > tmp){
            cout << list[i].c;
            tmp = list[i].index;
        }
    }
}