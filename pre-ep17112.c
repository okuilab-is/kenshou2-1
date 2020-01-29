#include <stdio.h>
#include <math.h>

int main(){
		  long int x,m,n,ans;
		  scanf("%ld%ld%ld", &x, &n, &m);
		  ans=pow(x,n)%m;
		  printf("%ld", ans);
}
