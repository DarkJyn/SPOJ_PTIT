#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
		double ax,ay,bx,by;
		cin >> ax >> ay >> bx >> by;
		if (ay > 0 && by > 0)
		{
			if (ay == by)
			{
				double a = abs(ax - bx);
				int b = sqrt(a * a / 4 + ay * ay) * 2;
				cout << b;
			}
			else
			{
				ay = -ay;
				int b = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
				cout << b;
			}
		}
		else if (ay == 0 && by != 0)
		{
			int b = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
			cout << b;
		}
		else if (ay != 0 && by == 0)
		{
			int b = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
			cout << b;
		}
		else if (ay == 0 && by == 0)
		{
			int b = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
			cout << b;
		}
		else if (ay < 0 && by < 0)
		{
			if (ay == by)
			{
				double a = abs(ax - bx);
				int b = sqrt(a * a / 4 + ay * ay) * 2;
				cout << b;
			}
			else
			{
				ay = -ay;
				int b = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
				cout << b;
			}
		}
		else
		{
			int b = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
			cout << b;
		}
		cout << "\n";
	}
}