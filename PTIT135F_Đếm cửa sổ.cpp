#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
	int n,m;
    cin >> n >> m;
    char a[600][600];
    for(int i = 0;i < 5*n+1;++i){
        for(int j = 0;j < 5*m+1;++j){
            cin >> a[i][j];
        }
    }
    int b[] = {0,0,0,0,0};
    int idxn = 1;
    int idxm = 1;
    for(int i = 0;i < n;++i){
        if(i != 0){
            idxn += 5;
        }    
        idxm = 1;
        for(int j = 0;j < m;++j){
            if(j != 0 ) idxm += 5;
            b[0]++;
            for(int k = 0;k < 4;++k){
                if(a[idxn + k][idxm] == '*'){
                    b[k]--;
                    b[k+1]++;
                }
            }
        }
    }
    for(int i = 0;i < 5;++i){
        cout << b[i]<<" ";
    }
}