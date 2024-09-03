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

int main(){
	string a,b,c;
	cin >> a >> b >>c;
	int check = 0;
	int pos;
	for(int i = 0;i < a.size();++i){
		if(a[i] == '?'){
			check = 1;
			pos = i;
		}
	}
	for(int i = 0;i < b.size();++i){
		if(b[i] == '?'){
			check = 2;
			pos = i;
		}
	}
	for(int i = 0;i < c.size();++i){
		if(c[i] == '?'){
			check = 3;
			pos = i;
		}
	}
	if(check == 1){
		string tmp = tru(c,b);
		cout << tmp[pos];
	}
	else if(check == 2){
		string tmp = tru(c,a);
		cout << tmp[pos];
	}
	else{
		string tmp = sum(a,b);
		cout << tmp[pos];
	}
}
