#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    double a, b, c;
	cin >> a >> b >> c;
	if (a == 0){
		if (b != 0){
			cout << "1\n";
			double y = -c / b;
			cout << fixed << setprecision(5) << y;
		}
		else{
			if (c == 0) cout << "-1";
			else cout << "0";
		}
	}
	else{
		double del = b * b - 4 * a * c;
		if (del < 0) cout << "0";
		else if (del == 0){
			cout << "1\n";
			double x = (-b) / (2 * a);
			cout << fixed << setprecision(5) << x;
		}
		else{
			cout << "2\n";
			double x1 = (-b + sqrt(del)) / (2 * a);
			double x2 = (-b - sqrt(del)) / (2 * a);
			if (x1 > x2) cout << fixed << setprecision(5) << x2 << "\n" << x1;
			else cout << fixed << setprecision(5) << x1 << "\n" << x2;
		}
	}
}