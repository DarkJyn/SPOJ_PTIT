#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, s = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
        int m = k / a[i];
        s += m;
        k -= a[i] * m;
    }
    cout << s;
}