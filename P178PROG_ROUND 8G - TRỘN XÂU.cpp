#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
	while (1){
		cin >> n;
		if (n == 0) break;
		char s1[200], s2[200], s[200];
		cin >> s1 >> s2 >> s;
		int dem = 0, ok = 1;
		while (1){
			if (ok == 0) break;
			dem++;
			if (dem > 50){
				ok = 0;
				break;
			}
			char s0[400];
			int pos = 0;
			for (int i = 0; i < 2 * n; i += 2){
				s0[i] = s2[pos];
				pos++;
			}
			pos = 0;
			for (int i = 1; i < 2 * n; i += 2){
				s0[i] = s1[pos];
				pos++;
			}
			s0[2 * n] = 0;
			if (strcmp(s0, s) == 0){
				ok = 1;
				break;
			}
			else{
				for (int i = 0; i < n; i++){
					s1[i] = s0[i];
                }
				pos = 0;
				for (int i = n; i < 2 * n; i++){
					s2[pos] = s0[i];
					pos++;
				}
			}
		}
		if (ok == 0){
			cout << "-1\n";
        }
		else{
			cout << dem << "\n";
        }
	}
}