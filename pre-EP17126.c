#include <stdio.h>

int main(void){
	long x,n,m,i,a=1;//a:出力 i:カウント
	scanf("%ld %ld %ld",&x,&n,&m);
	for(i=0;i<n;i++){
		a*=x;
		if(a>m){
			a%=m;
		}
	}
	printf("%ld\n",a);
}
