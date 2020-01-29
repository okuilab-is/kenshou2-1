#include <stdio.h>
#include <stdlib.h>

int main(){
	long x,n,m;
	long am,Ans=1;
	scanf("%ld" "%ld" "%ld",&x,&n,&m);
	for(int i=0; i<n ; i++){
		am=x%m;
		Ans=Ans*am%m;
	}
	printf("%ld",Ans);
	return 0;
}
