#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int save[40002];
int main(){
	int m, s;
    cin >> m >> s;
    string a = "", b = "";
    if (m == 1 && s == 0){
        cout << 0 << " " << 0;
    }
    else if (s == 0 || s > 9 * m){
        cout << -1 << " " << -1;
    }
    else{
        a.insert(0, s / 9, '9');
        b.insert(0, s / 9, '9');
        s %= 9;
        if (s > 0){
            a.insert(0, 1, (char)(s + '0'));
            b.push_back((char)(s + '0'));
        }
        a.insert(0, m - a.size(), '0');
        b.insert(b.size(), m - b.size(), '0');
        if (a[0] == '0'){
            a[0] = '1';
            int p = 1;
            while (a[p] == '0'){
                p++;
                if (p == a.size()) break;
            }
            a[p]--;
        }
        cout << a << " " << b;
    }
}