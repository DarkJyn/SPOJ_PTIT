#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct line{
	int l;
	int r;
};
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;cin >> n;
	line list[n];
	set <int> left;
	set <int> right;

	for(int i = 0;i < n;++i){
		cin >> list[i].l >> list[i].r;
		left.insert(list[i].l);
		right.insert(list[i].r);
	}
	for(int i = 0;i < n;++i){
		if(list[i].l == *left.begin() && list[i].r == *right.rbegin()){
			cout << i+1;
			return 0;
		}
	}
	cout <<"-1";
}