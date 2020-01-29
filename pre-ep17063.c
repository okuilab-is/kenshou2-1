#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
  long x,n,m;//long int 型
  
  scanf("%ld %ld %ld",&x,&n,&m);
  printf("%ld \n",(pow(x,n)/m));

  return 0;
}
