#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--)
	{
		long long n,k;
		cin>>n>>k;
		long long m=n%k;
		m=m*(m+1)/2;
		cout<<k*(k-1)/2*(n/k)+m<<"\n";
	}
	return 0;
}