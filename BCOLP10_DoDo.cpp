#include <bits/stdc++.h>
using namespace std;
int savea[26];
int saveb[26];
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
    string a,b;
    cin >> a >> b;
    
    int lengtha = a.size();
    int lengthb = b.size();
    for(int i = 0; i < lengtha;++i){
        savea[a[i]-'a']++;
    }
    for(int i = 0; i < lengthb;++i){
        saveb[b[i]-'a']++;
    }
    int res=0;
    for(int i = 0; i < 25;++i){
        res +=(max(savea[i],saveb[i])-min(savea[i],saveb[i]));
    }
    cout << res;
    return 0;
}