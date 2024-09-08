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
    int n;
	cin >> n;
	int p = 1;
	string a = "";
	while (a.size() <= 1000){
		string b = "";
		int pos = p;
		while (pos != 0){
			char k = pos % 10 + '0';
			b = k + b;
			pos /= 10;
		}
		a += b;
		p++;
	}
	cout << a[n - 1];
}