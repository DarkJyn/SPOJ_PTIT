#include <iostream>
using namespace std;
int main(){
	long long ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	long long s=(bx-ax)*(cy-ay)-(cx-ax)*(by-ay);
	if (s==0) cout<<"TOWARDS";
	else if (s>0) cout<<"LEFT";
	else cout<<"RIGHT";
	return 0;
}