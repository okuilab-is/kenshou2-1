#include <stdio.h>

int main(){
		  long int x,m,n,i,ans=1;
		  scanf("%ld%ld%ld", &x, &n, &m);
        for(i=0;i++;i<n){
					 ans=ans*x;
					 if(ans>m) ans=ans%m;
		  }		 
		  printf("%ld\n", ans);
}
