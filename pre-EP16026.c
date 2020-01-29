#include<stdio>

int main(void){
  long x,n,m;
  double i,ans;
  scanf("%ld",&x);
  ans=x;
  for(i=0.0,i<=n,++i){
    ans=ans*x;
  }
  ans=ans%m;
  printf("%ld",x);
}
