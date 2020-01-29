#include <stdio.h>

int main(void){
  long x,n,m,i,x2;
  scanf("%ld %ld %ld",&x,&n,&m);
  for(i=0;i<n;i++){
    x=x*x;
    x2=x/m;
  }
  
  printf("%ld\n",x2);
  return 0;
}
