#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(nullptr) ->sync_with_stdio(false);
	int t;
	cin >> t;
    while (t--)
    {
        int n, ok = 0;
        cin >> n;
        long long a[n];
        map<long long, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long k = sqrt(a[i] * a[i] + a[j] * a[j]);
                if (k * k == a[i] * a[i] + a[j] * a[j] && m[k])
                {
                    ok = 1;
                    break;
                }
            }
            if (ok)
                break;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}