#include<stdio.h>
int main (void){
  long x,n,m,i,a=0,am=0,sum;
  scanf("%ld %ld %ld",&x,&n,&m);
  if(n==0){
    sum=0;
  }else{
    sum=x;
    for(i=0;i<n;i++){
      sum=sum*x;
      a=(sum-am)%m;
      am+=a;
    }
  }
  printf("%ld\n",a);
}
