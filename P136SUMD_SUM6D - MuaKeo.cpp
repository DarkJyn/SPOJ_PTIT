#include <iostream>
using namespace std;
int main()
{
    long long c, k, MIN = 1;
    cin >> c >> k;
    for (int i = 1; i <= k; i++)
        MIN *= 10;
    long long c1 = (c / MIN) * MIN;
    long long c2 = c1 + MIN;
    if (c - c1 >= c2 - c)
        cout << c2;
    else
        cout << c1;
}