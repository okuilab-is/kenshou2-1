#include <stdio.h>
#include <math.h>
int main(void){
	long x,n,m,i,a=1;
	scanf("%ld %ld %ld",&x,&n,&m);
	for(i=0;i<n;i++){
		a*=x;
		if(a!=0){
			printf("%ld\n",a);
		}
	}
	printf("%ld\n",a%m);
}
