#include <stdio.h>
#include <math.h>
int main(void){
	long x,n,m;
	scanf("%ld %ld %ld",&x,&n,&m);
	printf("%ld",(power(x,n)%m));
}
