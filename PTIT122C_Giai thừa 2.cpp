#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string sum(string a, string b){
    int len = max(a.size(), b.size());
    while (a.size() < len)
        a = "0" + a;
    while (b.size() < len)
        b = "0" + b;
    string res = "";
    int tmp = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int num = (a[i] - '0') + (b[i] - '0') + tmp;
        tmp = num / 10;
        res = char(num % 10 + '0') + res;
    }
    if (tmp > 0)
        res = char(tmp + '0') + res;
    return res;
}
string nhan(string a, string b) {
    if (a == "0" || b == "0") return "0";
    int len1 = a.size();
    int len2 = b.size();
    int len = len1 + len2;
    string ans(len, '0');
    for (int i = len2 - 1; i >= 0; i--){
        int t = len2 - 1 - i;
        string res(t, '0');
        int tmp = 0;
        for (int j = len1 - 1; j >= 0; j--){
            int num = (a[j] - '0') * (b[i] - '0') + tmp;
            tmp = num / 10;
            res = char(num % 10 + '0') + res;
        }
        if (tmp > 0) res = char(tmp + '0') + res;
        ans = sum(ans, res);
    }
    while (ans[0] == '0') ans.erase(0, 1);
    return ans;
}

int main(){
int t;cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        string res = "1";
        for(int i = 2;i <= n;++i){
            int k = i;
            string tmp ="";
            while(k != 0){
                char x = k % 10 + '0';
                tmp = x + tmp;
                k /= 10;
            }
            res = nhan(res,tmp);
        }
        int cnt = 0;
        for(int i = 0;i < res.size();++i){
            if(res[i] == c) cnt++;
        }
        cout << cnt<<"\n";
    }
}