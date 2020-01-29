#include<stdio.h>
//aaaa
int main(void){
  long x,n,m,i,ans1=1;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  for(i=1;i<=n;++i){
    ans1=ans1*x;
  }
  ans1=ans1%m;
  printf("%ld\n",ans1);
}
