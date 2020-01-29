#include<stdio.h>
int main(void){
 long x,n,m,a,b,f;
 scanf("%ld%ld%ld",&x,&n,&m);
 a=x%m;
 b=a;
 n-=1;
 for(n;n>0:n--;){
  b=(b*a)%m;
 }
 printf("%ld",b);
}


