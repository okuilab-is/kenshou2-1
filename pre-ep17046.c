#include<stdio.h>
int main(void){
 long x,n,m,a,b,f;
 scanf("%ld%ld%ld",&x,&n,&m);
 a=x%m;
 b=a;
 n-=1;
 while(n>0){
  if(n%2==1) b=(b*b*a)%m;
  else b=(b*b)%m;
  n=n/2;
 }
 printf("%ld",b);
}


