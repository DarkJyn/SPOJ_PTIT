#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if (b == a)
		cout << "infinity";
	else if (a > b)
	{
		int k = a - b, s = 0;
		for (int i = 1; i < sqrt(k); i++)
		{
			if (k % i == 0)
			{
				if (i > b)
					s++;
				if (k / i > b)
					s++;
			}
		}
		int j = sqrt(k);
		if (j * j == k && k % j == 0 && j > b)
			s++;
		cout << s;
	}
	else
		cout << "0";
}