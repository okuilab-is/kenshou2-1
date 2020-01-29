#include<stdio.h>

int main(){
  long x,n,m,pow=1;//long int 型
  int i;
  scanf("%ld %ld %ld",&x,&n,&m);
  for(i=0;i<n;i++){
    pow*=x;
  }
  printf("%ld \n",pow/m);

  return 0;
}
