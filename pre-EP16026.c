#include<stdio.h>
//aaaa
int main(void){
  long x,n,m;
  int i,ans;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  ans=x;
  for(i=0;i<=n;i++){
    ans=ans*x;
  }
  ans=ans%m;
  printf("%ld",ans);
}
