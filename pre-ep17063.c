#include<stdio.h>
#include<math.h>

int main(){
  long a,b=1,x,n,m;//long int 型
  int i;
  scanf("%ld %ld %ld",&x,&n,&m);
  a=x%m;
  for(i=0;i<n;i++){
    b*=a;
  }
  printf("%ld \n",b);

  return 0;
}
