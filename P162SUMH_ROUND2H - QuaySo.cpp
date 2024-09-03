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
    string a;
	cin >> a;
	int s = 0;
	for (int i = 0; i < a.size(); i++){
		if (a[i] == 'A' || a[i] == 'B' || a[i] == 'C') s += 3;
		if (a[i] == 'D' || a[i] == 'E' || a[i] == 'F') s += 4;
		if (a[i] == 'G' || a[i] == 'H' || a[i] == 'I') s += 5;
		if (a[i] == 'J' || a[i] == 'K' || a[i] == 'L') s += 6;
		if (a[i] == 'M' || a[i] == 'N' || a[i] == 'O') s += 7;
		if (a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S') s += 8;
		if (a[i] == 'T' || a[i] == 'U' || a[i] == 'V') s += 9;
		if (a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z') s += 10;
	}
	cout << s;
}
/* Dean
                  __------__
                /~          ~\
               |    //^\//^\|         Oh..My great god ...     
             /~~\  ||  o| |o|:~\       Please give me many many
            | |6   ||___|_|_||:|    /  bananas .. 
             \__.  /      o  \/'       
              |   (       O   )        
     /~~~~\    `\  \         /
    | |~~\ |     )  ~------~`\
   /' |  | |   /     ____ /~~~)\
  (_/'   | | |     /'    |    ( |
         | | |     \    /   __)/ \
         \  \ \      \/    /' \   `\
           \  \|\        /   | |\___|
             \ |  \____/     | |
             /^~>  \        _/ <
            |  |         \       \
            |  | \        \        \
            -^-\  \       |        )
                 `\_______/^\______/-Dean
*/
