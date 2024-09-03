#include <iostream>
using namespace std;
int primeCheck(int n)
{
    if (n == 2 || n == 3)
        return 1;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}
int main() {
	int n;
	cin >> n;
	if(primeCheck(n) == 1) cout << "YES";
	else cout << "NO";
	return 0;
}