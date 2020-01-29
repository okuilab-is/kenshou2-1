#include<stdio.h>
//aaaa
int main(void){
  long x,n,m,i,ans1,ans2;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  ans1=x;
  for(i=0;i<=n;++i){
    ans1=ans1*x;
  }
  ans2=ans1%m;
  printf("%ld",ans2);
}
