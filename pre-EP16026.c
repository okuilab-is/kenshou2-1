#include<stdio.h>
//aaaa
int main(void){
  long x,n,m,i,ans1=1;
  scanf("%ld",&x);
  scanf("%ld",&n);
  scanf("%ld",&m);
  for(i=1;i<=n;++i){
    if(ans1>m) ans1=ans1%m; 
    else ans1=ans1*x;
  }
  printf("%ld\n",ans1);
}
