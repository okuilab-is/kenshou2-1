#include<stdio.h>
//aaaa
int main(void){
  long x,n,m,i,ans1,ans2,ans3=0;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  ans1=x;
  for(i=1;i<=n;++i){
    ans1=ans1*x;
    if(ans>=m) ans2=ans1%m;
    else ans2=ans1;
  }
  printf("%ld\n",ans2);
}
