    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    #define MOD 1000000007;
    int main(){
        cin.tie(nullptr) -> sync_with_stdio(false);
        int t;cin >>t;
        while(t--){
            int test;cin >>test;
            string s;
            cin >> s;
            int cnt[8];
            for(int i = 0; i < 8;++i) cnt[i] = 0;
            for(int i = 1; i < 39;++i){
                if(s[i-1] == 'T' && s[i] == 'T' && s[i+1] == 'T') cnt[0]++;
                else if(s[i-1] == 'T' && s[i] == 'T' && s[i+1] == 'H') cnt[1]++;
                else if(s[i-1] == 'T' && s[i] == 'H' && s[i+1] == 'T') cnt[2]++;
                else if(s[i-1] == 'T' && s[i] == 'H' && s[i+1] == 'H') cnt[3]++;
                else if(s[i-1] == 'H' && s[i] == 'T' && s[i+1] == 'T') cnt[4]++;
                else if(s[i-1] == 'H' && s[i] == 'T' && s[i+1] == 'H') cnt[5]++;
                else if(s[i-1] == 'H' && s[i] == 'H' && s[i+1] == 'T') cnt[6]++;
                else if(s[i-1] == 'H' && s[i] == 'H' && s[i+1] == 'H') cnt[7]++;

            }
            cout << test <<" ";
            for(int i = 0; i < 8;++i) cout << cnt[i]<<" ";
            cout <<"\n";
        }
    }