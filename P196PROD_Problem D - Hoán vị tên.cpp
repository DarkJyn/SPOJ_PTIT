#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct data{
	int pos;
	string a;
};
bool cmp(struct data e, struct data f){
	if (e.a == f.a){
		return e.pos < f.pos;
    }
	return e.a < f.a;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
	cin >> n;
	struct data b[n];
	for (int i = 0; i < n; i++){
		b[i].pos = i + 1;
		cin >> b[i].a;
	}
	sort(b, b + n, cmp);
	for (int i = 0; i < n; i++){
		cout << b[i].pos << " ";
    }
}