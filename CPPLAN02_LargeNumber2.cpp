#include <bits/stdc++.h>
using namespace std;


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
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << sum(a,b)<<"\n";
	}
    return 0;
}