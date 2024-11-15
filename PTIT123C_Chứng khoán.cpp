#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
bool cmp(pair<int, int> a, pair<int, int> b){
	if (a.second > b.second) return 0;
	else if (a.second == b.second){
		if (a.first > b.first) return 0;
	}
	return 1;
}
bool cmp2(pair<int, int> a, pair<int, int> b){
	if (a.first > b.first){
		return 0;
    }
	return 1;
}
bool cmp3(pair<int, int> a, pair<int, int> b){
	if (a.first < b.first){
		return 0;
    }
	return 1;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k1, k2, t = 1;
	vector<pair<int, int>> a(1000000);
	while (1){
		cin >> n >> k1 >> k2;
		if (n == 0 && k1 == 0 && k2 == 0) break;
		for (int i = 0; i < n; i++) {
			cin >> a[i].second;
			a[i].first = i + 1;
		}
		sort(a.begin(), a.begin() + n, cmp);
		sort(a.begin(), a.begin() + k1, cmp2);
		sort(a.begin() + (n - k2), a.begin() + n, cmp3);
		cout << "Case " << t++ << endl;
		for (int i = 0; i < k1; i++){
			cout << a[i].first << " ";
        }
		cout << endl;
		for (int i = n - k2; i < n; i++){
			cout << a[i].first << " ";
        }
		cout << endl;
	}
}