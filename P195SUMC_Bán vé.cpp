#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
int main(){
	int n;cin >> n;
	int a[n];
	int count25 = 1;
	int count50 = 0;
	int count100 = 0;
	int mistake = 0;
	for(int i = 0;i<n;++i){
		cin >> a[i];
	}
	if(a[0] != 25) mistake++;
	else{
		for (int i = 1;i<n;++i){
    		if(a[i] == 25) ++count25;
    		else if(a[i] == 50){
    			++count50;
    			count25--;
    			if(count25 < 0){
    				mistake++;
    				break;
				}
			}
			else if(a[i] == 100){
				if(count50 != 0){
					count50--;
					count25--;
					if(count25<0&&count50<0){
						mistake++;
						break;
					}
				}
				else count25 -= 3;
				if(count25<0){
					mistake++;
					break;
				}
			}
		}
	}
	if(mistake > 0) cout << "NO";
	else cout << "YES";
	return 0;
}