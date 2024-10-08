#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int   N = 1000001;
int         n,t,k;
char        res[2*N];

int main() {
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		k = 0;
		for (int i=1; i<2*n; i++) {
			if (i <= n)
				k += i;
			else
				k += 2*n-i;
			res[2*n-i] = k % 10 + 48;
			k /= 10;
		}
		for (int i=1; i<2*n; i++) printf("%c",res[i]);
		printf("\n");
	}

	return 0;
}