#include<stdio.h>
int main(void){
 long x,n,m,a,b,f;
 scanf("%ld%ld%ld",&x,&n,&m);
 a=x%m;
 b=a;
 n-=1;
 while(n>0){
  if(n%2==1){
   b=(b*a)%m;
   n-=1;
  }else{
   b=(b*b)%m;
   n=n/2;
  }
 }
/*
 for(n;n>0;n--){
  b=(b*a)%m;
 }
*/
 printf("%ld\n",b);
}


