#include<stdio.h>
#include<math.h>

int main(){
  long pow=1,x,n,m;//long int 型
  int i;
  scanf("%ld %ld %ld",&x,&n,&m);
  for(i=0;i<n;i++){
    pow=pow*x;
  }
  printf("%ld \n",pow/m);

  return 0;
}
