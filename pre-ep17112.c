#include <stdio.h>

int main(void){
		  long x,m,n,i,ans=1;
		  scanf("%ld%ld%ld", &x, &n, &m);
        for(i=0;i++;i<n){
					 ans=ans*x;
					 ans=ans%m;
					 printf("%ld",ans);
		  }		 
		  printf("%ld\n", ans);
		  return 0;
}
