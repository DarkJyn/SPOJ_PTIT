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
	int s = 1;
	for (int i = 0; i < a.size(); i++){
		if (a[i] == '0')
			s *= 2;
		else if (a[i] == '1')
			s *= 7;
		else if (a[i] == '2')
			s *= 2;
		else if (a[i] == '3')
			s *= 3;
		else if (a[i] == '4')
			s *= 3;
		else if (a[i] == '5')
			s *= 4;
		else if (a[i] == '6')
			s *= 2;
		else if (a[i] == '7')
			s *= 5;
		else if (a[i] == '8')
			s *= 1;
		else if (a[i] == '9')
			s *= 2;
	}
	cout << s;
}