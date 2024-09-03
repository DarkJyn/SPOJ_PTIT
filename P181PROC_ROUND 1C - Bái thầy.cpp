#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	long long n, k, x = n;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        if (n % i != i - 1)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}