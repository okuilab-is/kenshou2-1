#include <stdio.h>
int main(void){
  long x,n,m,i,x1,x2,x3;
  scanf("%ld %ld %ld",&x,&n,&m);
  x1=x;
  x3=0;
  for(i=1;i<n;i++){
    x=x*x1;
    x2=x1%m;
    x3=x3+x2;
  }
  printf("%ld\n",x3);
  return 0;
}
