#include<stdio.h>
int main (void){
  long x,n,m,am=0,sum;
  int i;
  scanf("%ld %ld %ld",&x,&n,&m);
  if(n==0){
    sum=0;
    am=m;
  }else{
    sum=x;
    for(i=0;i<n-1;i++){
      am+=(sum-am)%m;
      sum=sum*x;
    }
    am+=(sum-am)%m;
  }
  printf("%ld\n",am);
}
