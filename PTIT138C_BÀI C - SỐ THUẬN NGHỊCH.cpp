#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, c;
        cin >> a;
        int n = a.size();
        for (int i = 0; i < n; i++)
            if (a[i] >= 'A' && a[i] <= 'Z')
                a[i] += 32;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'c')
                b += '2';
            else if (a[i] >= 'd' && a[i] <= 'f')
                b += '3';
            else if (a[i] >= 'g' && a[i] <= 'i')
                b += '4';
            else if (a[i] >= 'j' && a[i] <= 'l')
                b += '5';
            else if (a[i] >= 'm' && a[i] <= 'o')
                b += '6';
            else if (a[i] >= 'p' && a[i] <= 's')
                b += '7';
            else if (a[i] >= 't' && a[i] <= 'v')
                b += '8';
            else if (a[i] >= 'w' && a[i] <= 'z')
                b += '9';
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] >= 'a' && a[i] <= 'c')
                c += '2';
            else if (a[i] >= 'd' && a[i] <= 'f')
                c += '3';
            else if (a[i] >= 'g' && a[i] <= 'i')
                c += '4';
            else if (a[i] >= 'j' && a[i] <= 'l')
                c += '5';
            else if (a[i] >= 'm' && a[i] <= 'o')
                c += '6';
            else if (a[i] >= 'p' && a[i] <= 's')
                c += '7';
            else if (a[i] >= 't' && a[i] <= 'v')
                c += '8';
            else if (a[i] >= 'w' && a[i] <= 'z')
                c += '9';
        }
        if (b == c)
            printf("YES\n");
        else
            printf("NO\n");
    }
}