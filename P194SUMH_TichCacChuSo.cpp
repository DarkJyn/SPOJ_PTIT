#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
	cin >> n;
	vector<int> a;
	if (n == 0)
		cout << "10";
	else if (n == 1)
		cout << "1";
	else
	{
		for (int i = 9; i >= 2; i--)
		{
			while (n % i == 0)
			{
				a.push_back(i);
				n /= i;
			}
		}
		if (n > 10)
		{
			cout << "-1";
			return 0;
		}
		else if (n > 1)
			a.push_back(n);
		sort(a.begin(), a.end());
		for (int i = 0; i < a.size(); i++)
			cout << a[i];
	}
}
