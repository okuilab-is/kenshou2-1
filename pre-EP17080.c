#include <stdio.h>

int main(void){
  long x,n,m,i,x1,x2;
  scanf("%ld %ld %ld",&x,&n,&m);
  x1=x;
  for(i=1;i<n;i++){
    x=x*x1;
    x2=x%m;
  }
  
  printf("%ld\n",x2);
  return 0;
}
