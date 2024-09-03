#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int a[] = {4, 16, 121, 529, 4096, 17956, 139129, 609961, 4726276, 20720704, 160554241, 703893961};
	int test = 1;
	while(1){
		int l,b;
		cin >> l >> b;
		int cnt = 0;
		if(l == 0 && b == 0) return 0;
		for(int i = 0;i < 12;++i){
			if(a[i] > l && a[i]< b){
				cnt++;
			}
		}
		cout << "Case "<<test<<": "<<cnt<<"\n";
		test++;
	}
}

