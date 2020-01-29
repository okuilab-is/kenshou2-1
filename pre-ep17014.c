#include<stdio.h>
int main (void){
  long x,n,m,i,a=0,am=0,sum;
  scanf("%ld %ld %ld",&x,&n,&m);
  if(n==0){
    sum=0;
    am=0%m;
  }else{
    sum=x;
    for(i=0;i<n-1;i++){
      sum=sum*x;
      a=(sum-am)%m;
      am+=a;
    }
  }
  printf("%ld\n",am);
}
