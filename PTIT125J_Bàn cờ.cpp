#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	int n;
	cin >> n;
	char a[n + 8][n + 8] = {};
	for (int i = 3; i < n + 3; i++)
		for (int j = 3; j < n + 3; j++)
			cin >> a[i][j];
	for (int i = 3; i < n + 3; i++)
	{
		for (int j = 3; j < n + 1; j++)
		{
			if (a[j][i] == a[j + 1][i] && a[j][i] == a[j + 2][i] && a[j][i] != '.')
			{
				cout << a[j][i];
				return 0;
			}
		}
	}
	for (int i = 3; i < n + 3; i++)
	{
		for (int j = 3; j < n + 1; j++)
		{
			if (a[i][j] == a[i][j + 1] && a[i][j] == a[i][j + 2] && a[i][j] != '.')
			{
				cout << a[i][j];
				return 0;
			}
		}
	}
	for (int i = 3; i < n + 3; i++)
	{
		for (int j = 3; j < n + 3; j++)
		{
			if (a[i][j] == a[i + 1][j + 1] && a[i][j] == a[i + 2][j + 2] && a[i][j] != '.')
			{
				cout << a[i][j];
				return 0;
			}
		}
	}
	for (int i = 3; i < n + 3; i++)
	{
		for (int j = 3; j < n + 3; j++)
		{
			if (a[i][j] == a[i + 1][j - 1] && a[i][j] == a[i + 2][j - 2] && a[i][j] != '.')
			{
				cout << a[i][j];
				return 0;
			}
		}
	}
	cout << "ongoing";
}