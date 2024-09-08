#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
	cin >> n;
	vector<string> a(6);
	a[0] = "+------------------------+";
	a[5] = "+------------------------+";
	a[1] = "|#.#.#.#.#.#.#.#.#.#.#.|D|)";
	a[2] = "|#.#.#.#.#.#.#.#.#.#.#.|.|";
	a[3] = "|#.......................|";
	a[4] = "|#.#.#.#.#.#.#.#.#.#.#.|.|)";
	if (n <= 4){
		for (int i = 1; i <= n; i++){
			a[i][1] = 'O';
        }
    }
	else{
		for (int i = 1; i <= 4; i++){
			a[i][1] = 'O';
        }
		int j = 3, k = 1;
		for (int i = 5; i <= n; i++){
			a[k][j] = 'O';
			k++;
			if (k == 3){
				k++;
            }
			if (k == 5){
				k = 1;
				j += 2;
			}
		}
	}
	for (int i = 0; i < 6; i++){
		cout << a[i] << endl;
    }
}