#include <bits/stdc++.h>
using namespace std;
string cong(string a,string b){
    string result = "";
    if(a.size() < b.size()) a.insert(0,b.size() - a.size(),'0');
    else if(a.size() > b.size()) b.insert(0,a.size() - b.size(),'0');
    int memory = 0;
    for(int i = a.size()-1;i >= 0;--i){
        memory = a[i] + b[i] - 96 + memory;
        result.insert(0,1,memory%10 + 48);
        memory /= 10;
    }
    if(memory > 0) result.insert(0,1,memory+ 48);
    return result;
}
string minix (char a,string b){
    string result = "";
    int memory = 0;
    for(int i = b.size()-1;i >= 0; --i){
        memory = (a-48) * (b[i]-48) + memory;
        result.insert(0,1,memory%10 + 48);
        memory /= 10; 
    }
    if(memory > 0) result.insert(0,1,memory+48);
    return result;
}
string nhan(string a,string b){
    string result ="";
    string list[a.size()];
    for(int i = a.size() - 1;i >= 0;--i){
        list[i] = minix(a[i],b);
        list[i].insert(list[i].size(),a.size()-i - 1,'0');
        result = cong(result,list[i]);
    }
    return result;
}
int main(){
    int t;cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        cout << nhan(a,b)<<"\n";
    }
}