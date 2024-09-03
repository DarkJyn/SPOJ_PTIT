#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
vector <int> a(10000002,1);
void era(){
	a[1] = 0;
	for(long long i = 2;i <= 5000000;++i){
		for(long long j = i*2;j<= 10000000;j+=i){
			a[j] += i;
		}
	}
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	era();
	int c,b;
	cin >> c >> b;
	ll s = 0;
	for(int i = c;i <= b;++i){
		s += abs(i - a[i]);
	}
	cout <<s;
} 