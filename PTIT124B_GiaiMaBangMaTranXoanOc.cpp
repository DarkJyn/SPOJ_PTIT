#include <bits/stdc++.h>
 
using namespace std;
 
void solve(vector<string> &v) {
    string temp = "";
    string alpha = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < v.size(); ++i) {
        int sum = 0, res = 16;
        for (int j = 0; j < v[i].size(); ++j) {
            sum += (v[i][j] - '0') * res;
            res /= 2;
        }
        temp += alpha[sum];
    }
    cout << temp;
}
 
int main() {
    int t;
    cin >> t;
    for (int x = 1; x <= t; ++x) {
        int a, b;
        cin >> a >> b;
        cin.ignore();
        char s[30][30];
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                cin >> s[i][j];
            }
        }
        vector<string> v;
        int h_start = 0, h_end = a - 1, c_start = 0, c_end = b - 1;
        string temp = "";
        while (h_start <= h_end && c_start <= c_end) {
            for (int i = c_start; i <= c_end; ++i) {
                temp += s[h_start][i];
                if (temp.length() == 5) {
                    v.push_back(temp);
                    temp = "";
                }
            }
            ++h_start;
            for (int i = h_start; i <= h_end; ++i) {
                temp += s[i][c_end];
                if (temp.length() == 5) {
                    v.push_back(temp);
                    temp = "";
                }
            }
            --c_end;
            if (h_start <= h_end) {
                for (int i = c_end; i >= c_start; --i) {
                    temp += s[h_end][i];
                    if (temp.length() == 5) {
                        v.push_back(temp);
                        temp = "";
                    }
                }
                --h_end;
            }
            if (c_start <= c_end) {
                for (int i = h_end; i >= h_start; --i) {
                    temp += s[i][c_start];
                    if (temp.length() == 5) {
                        v.push_back(temp);
                        temp = "";
                    }
                }
                ++c_start;
            }
        }
        cout << x << " ";
        solve(v);
        cout << endl;
    }
 
    return 0;
}