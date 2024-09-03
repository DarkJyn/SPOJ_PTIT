#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll u[1000005] = {}, v[1000005] = {}, x[1000005] = {}, y[1000005] = {};
void era()
{
	for (int i = 1; i <= 1e6; i++)
	{
		for (int j = i; j <= 1e6; j += i)
		{
			x[j] += i;
			y[j]++;
		}
	}
	x[0] = y[0] = 0;
	for (int i = 1; i <= 1e6; i++)
	{
		u[i] = u[i - 1] + y[i];
		v[i] = v[i - 1] + x[i];
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	era();
	int t;
	cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		if (l > r)
		{
			int k = l;
			l = r;
			r = k;
		}
		if (l == 0)
			l++;
		cout << u[r] - u[l - 1] << " " << v[r] - v[l - 1] << endl;
	}
}