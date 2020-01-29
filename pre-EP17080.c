#include <stdio.h>
int main(void){
  long x,n,m,i,x1,x2,x3;
  scanf("%ld %ld %ld",&x,&n,&m);
  x1=x;
  x3=0;
  for(i=1;i<n;i++){
    x=x*x1;
    printf("%ld",x);
    if(x%m > 0){
      x2=x%m;
      x=x/m;
    }
  }
  printf("%ld\n",x2);
  return 0;
}
