#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    string a;
	cin >> a;
	string a1 = "9223372036854775808";
	string a2 = "2147483647";
	if (a[0] == '-'){
		a.erase(0, 1);
    }
	if (a.size() > 19){
		cout << "BigInteger";
    }
	else if (a.size() == 19 && a > a1){
		cout << "BigInteger";
    }
	else if (a.size() > 10) cout << "long";
	else if (a.size() == 10 && a > a2) cout << "long";
	else if (a.size() > 5) cout << "int";
	else if (a.size() == 5 && a > "32767") cout << "int";
	else if (a.size() > 3) cout << "short";
	else if (a.size() == 3 && a > "127") cout << "short";
	else cout << "byte";
}