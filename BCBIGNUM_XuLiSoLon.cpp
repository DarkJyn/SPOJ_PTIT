#include <bits/stdc++.h>
using namespace std;

// Cộng 2 số nguyên lớn
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
string tru(string a, string b)
{
    int len = max(a.size(), b.size());
    while (a.size() < len) a = "0" + a;
    while (b.size() < len) b = "0" + b;
    bool check = 1;
    if (a == b) return "0";
    if (a < b){
        swap(a, b);
        check = 0;
    }
    string res = "";
    int tmp = 0;
    for (int i = len - 1; i >= 0; i--){
        int num = (a[i] - '0') - (b[i] - '0') - tmp;
        if (num < 0){
            tmp = 1;
            num += 10;
        }
        else tmp = 0;
        res = char(num + '0') + res;
    }
    
    while (res[0] == '0') res.erase(0, 1);
    if (check == 0) res = "-" + res;
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
    cin.tie(nullptr) -> sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    cout << sum(a,b) <<"\n"<<tru(a,b)<< "\n"<<nhan(a,b);
    return 0;
}