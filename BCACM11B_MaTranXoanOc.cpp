#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x,y;
        cin >> x >> y;
        int a[n][n];
        int index = 1;
        int cell = 0;
        int left = 0;
        int floor = n-1;
        int right = n-1;
        while(cell <= floor && left <= right){
            for (int j = left;j<=right;++j){
                a[cell][j] = index;
                index++;
            }
            cell++;
            for(int i = cell;i <= floor;++i){
                a[i][right] = index;
                index++;
            }
            right--;
            if(cell<=floor){
                for(int j = right;j>=left;--j){
                a[floor][j] = index;
                index++;
                }
                floor--;
            }
            if(left<=right){
                for(int i = floor;i>=cell;--i){
                a[i][left]= index;
                index++;
                }
                left++;
            }
        }
        cout << a[x-1][y-1] <<"\n";
    }
    return 0;
}