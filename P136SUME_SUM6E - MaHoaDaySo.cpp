#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
struct note{
	int id;
	int s;
	int no;
};
bool cmp(note e,note f){
	if(e.s==f.s) return e.id<f.id;
	return e.s>f.s;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector <note> a;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		int ok=1;
		for(int j=0;j<a.size();j++){
			if(a[j].no==m){
				ok=0;
				a[j].s++;
				break;
			}
		}
		if(ok==1){
			note b;
			b.id=i;
			b.no=m;
			b.s=1;
			a.push_back(b);
		}
	}
	sort(a.begin(),a.end(),cmp);
	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[i].s;j++){
			cout<<a[i].no<<" ";
		}
	}
}