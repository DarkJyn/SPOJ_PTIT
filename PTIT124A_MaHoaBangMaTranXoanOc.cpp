#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int x = 1; x <= t; ++x) {
        int a, b;
        cin >> a >> b;
        cin.ignore();
        char s[30][30];
        string str;
		getline(cin,str);
		string tmp;
		for(int i = 0;i < str.size();++i){
			if(str[i] == 'A') tmp = tmp + "00001";
			else if(str[i] == 'B') tmp = tmp += "00010";
			else if(str[i] == 'C') tmp = tmp += "00011";
			else if(str[i] == 'D') tmp = tmp += "00100";
			else if(str[i] == 'E') tmp = tmp += "00101";
			else if(str[i] == 'F') tmp = tmp += "00110";
			else if(str[i] == 'G') tmp = tmp += "00111";
			else if(str[i] == 'H') tmp = tmp += "01000";
			else if(str[i] == 'I') tmp = tmp += "01001";
			else if(str[i] == 'J') tmp = tmp += "01010";
			else if(str[i] == 'K') tmp = tmp += "01011";
			else if(str[i] == 'L') tmp = tmp += "01100";
			else if(str[i] == 'M') tmp = tmp += "01101";
			else if(str[i] == 'N') tmp = tmp += "01110";
			else if(str[i] == 'O') tmp = tmp += "01111";
			else if(str[i] == 'P') tmp = tmp += "10000";
			else if(str[i] == 'Q') tmp = tmp += "10001";
			else if(str[i] == 'R') tmp = tmp += "10010";
			else if(str[i] == 'S') tmp = tmp += "10011";
			else if(str[i] == 'T') tmp = tmp += "10100";
			else if(str[i] == 'U') tmp = tmp += "10101";
			else if(str[i] == 'V') tmp = tmp += "10110";
			else if(str[i] == 'W') tmp = tmp += "10111";
			else if(str[i] == 'X') tmp = tmp += "11000";
			else if(str[i] == 'Y') tmp = tmp += "11001";
			else if(str[i] == 'Z') tmp = tmp += "11010";
            else if(str[i] == ' ') tmp = tmp += "00000";
		}
		while(tmp.size() < a*b) tmp+= "0";
        int h_start = 0, h_end = a - 1, c_start = 0, c_end = b - 1;
        int idx =0;
        while (h_start <= h_end && c_start <= c_end) {
            for (int i = c_start; i <= c_end; ++i) {
                s[h_start][i] = tmp[idx];
				idx++;
            }
            ++h_start;
            for (int i = h_start; i <= h_end; ++i) {
                s[i][c_end] = tmp[idx];
				idx++;
            }
            --c_end;
            if (h_start <= h_end) {
                for (int i = c_end; i >= c_start; --i) {
                    s[h_end][i] = tmp[idx];
					idx++;
                }
                --h_end;
            }
            if (c_start <= c_end) {
                for (int i = h_end; i >= h_start; --i) {
                    s[i][c_start] = tmp[idx];
					idx++;
                }
                ++c_start;
            }
        }
		cout << x <<" ";
		for(int i = 0;i < a;++i){
			for(int j = 0;j < b;++j){
				cout << s[i][j];
			}
		}
		cout <<"\n";
    }
}