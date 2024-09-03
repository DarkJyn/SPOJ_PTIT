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
    int n;
    while (1){
        cin >> n;
        if (n == 0)     break;
        int d = 0;
        int check = 1;
        char s1[200], s2[200], s[200];
        cin >> s1 >> s2 >> s;
        while (check){
            d++;
            if (d > 50){
                check = 0;
                break;
            }
            char s0[400];
            int pos = 0;
            for (int i = 0; i < 2 * n; i += 2){
                s0[i] = s2[pos];
                s0[i + 1] = s1[pos];
                pos++;
            }
            s0[2 * n] = 0;
            if (strcmp(s0, s) == 0){
                check = 1;
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
        if (check == 0){
            cout << "-1\n";
        }
        else{
            cout << d << "\n";
        }
    }   
}