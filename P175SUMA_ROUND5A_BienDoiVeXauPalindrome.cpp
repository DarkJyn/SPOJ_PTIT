#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, k, b = 0, c = 0;
	cin >> n >> k;
	string a;
	cin >> a;
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - i - 1])
			b++;
		else
			c++;
	}
	if (k == n)
		cout << "Yes";
	else if (k >= b)
	{
		if (k <= 2 * b)
			cout << "Yes";
		else
		{
			k -= 2 * b;
			if (k % 2 == 0 && k / 2 <= c)
				cout << "Yes";
			else
				cout << "No";
		}
	}
	else
		cout << "No";
}