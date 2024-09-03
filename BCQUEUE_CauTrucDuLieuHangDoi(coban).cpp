#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
	cin >> n;
	queue <int> q;
	for(int i = 0; i < n ;i++){
        int x;
		cin >> x;
		if(x==1) cout << q.size() <<"\n";
		else if(x==2){
			if(q.empty()) cout << "YES"<<"\n";
			else cout << "NO" << "\n";
		}
		else if(x == 3){
			cin >> x;
			q.push(x);
		}
		else if(x == 4){
			if(!q.empty()) q.pop();
		}
		else{
			if(q.empty()) cout << -1 << "\n";
			else{
				if(x == 5) cout << q.front()<<"\n";
				else{
					queue <int> dq = q;
					while(dq.size() > 1) dq.pop();
					cout<<dq.front()<<"\n";
				}
			}
		}
	}
    
}