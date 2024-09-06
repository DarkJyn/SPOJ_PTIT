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
    while(1){
		string s;
		getline(cin,s);
		if(s == "."){
			break;
		}
		vector<char> save;
		int check = 0;
		for(int i = 0;i < s.size();++i){
			if(s[i] == '(' || s[i] == '[') save.push_back(s[i]);
			else if(s[i] == ')'){
				if(save.size() == 0){
					check = 1;
					break;
				}
				else if(save[save.size()-1] == '('){
					save.erase(save.end()-1);
				}
				else{
					check = 1;
					break;
				}
			}
			else if(s[i] == ']'){
				if(save.size() == 0){
					check = 1;
					break;
				}
				else if(save[save.size()-1] == '['){
					save.erase(save.end()-1);
				}
				else {
					check = 1;
					break;
				}
			}
		}
		if(save.size() != 0) {
			check = 1;
		}
		if(check == 0) cout << "yes";
		else cout << "no";
		cout << "\n";
	}
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
