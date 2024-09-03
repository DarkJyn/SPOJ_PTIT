#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int j = 1;j<=n;j++){
		long long a,x,y;
		scanf("%lld%lld%lld",&a,&x,&y);
		while (y != 0){
			long long wall = x % y;
			x = y;
			y = wall;
		}
		for(long long i=1;i<=x;i++){
			printf("%lld",a);
		}
		printf("\n");
	}
	return 0;
}