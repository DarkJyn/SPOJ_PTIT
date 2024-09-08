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
    string s;
	cin >> s;
	int n = s.size();
    int d = 0;
	for (int i = 0; i < n; i++){
		if (s[i] >= 'A' && s[i] <= 'Z') d++;
		else if (s[i] >= 'a' && s[i] <= 'z') d--;
	}
	if (d > 0){
		for (int i = 0; i < n; i++){
			if (s[i] >= 'a' && s[i] <= 'z'){
				s[i] = s[i] - 32;
            }
        }
	}
	else{
		for (int i = 0; i < n; i++){
			if (s[i] >= 'A' && s[i] <= 'Z'){
				s[i] = s[i] + 32;
            }
        }
	}
	cout << s;
}