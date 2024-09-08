#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr) -> sync_with_stdio(false);
	char res[28] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '_', '.'};
    while(1){
        int a;
        cin >> a;
        if(a == 0) return 0;
        string b;
        cin >> b;
        for(int i = b.size()-1;i>= 0;i--){
            int k;
            if(b[i] == '_'){
                k = b[i] - '_' + 26;
            }
            else if(b[i] == '.'){
                k = b[i] - '.' + 27;
            }
            else k = b[i] - 'A';
            cout << res[(a+k)%28];
        }
        cout <<"\n";
    }
}