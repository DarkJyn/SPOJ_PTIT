#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	while (1){
		long long a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a == -1 && b == -1 && c == -1 && d == -1) return 0;
		if (a == -1){
			if (b + d == c + c){
				if (2 * b - c < 1 || 2 * b - c > 10000)
					cout << "-1\n";
				else
					cout << 2 * b - c << endl;
			}
			else if (b * d == c * c){
				if (b * b / c < 1 || b * b / c > 10000 || b * b / c != (float)b * b / c)
					cout << "-1\n";
				else
					cout << b * b / c << endl;
			}
			else
				cout << "-1\n";
		}
		else if (b == -1){
			if (3 * c - 2 * d == a){
				if (2 * c - d < 1 || 2 * c - d > 10000)
					cout << "-1\n";
				else
					cout << 2 * c - d << endl;
			}
			else if ((float)c * c * c / (d * d) == (float)a){
				if (c * c / d < 1 || c * c / d > 10000 || c * c / d != (float)c * c / d)
					cout << "-1\n";
				else
					cout << c * c / d << endl;
			}
			else
				cout << "-1\n";
		}
		else if (c == -1){
			if (d - b == 2 * (b - a)){
				if (2 * b - a < 1 || 2 * b - a > 10000)
					cout << "-1\n";
				else
					cout << 2 * b - a << endl;
			}
			else if ((float)d / b == (float)b * b / (a * a)){
				if (b * b / a < 1 || b * b / a > 10000 || b * b / a != (float)b * b / a)
					cout << "-1\n";
				else
					cout << b * b / a << endl;
			}
			else
				cout << "-1\n";
		}
		else if (d == -1){
			if (a + c == b + b){
				if (c + b - a < 1 || c + b - a > 10000)
					cout << "-1\n";
				else
					cout << c + b - a << endl;
			}
			else if (c * a == b * b){
				if (c * b / a < 1 || c * b / a > 10000 || c * b / a != (float)c * b / a)
					cout << "-1\n";
				else
					cout << c * b / a << endl;
			}
			else
				cout << "-1\n";
		}
	}
}