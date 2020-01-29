#include <stdio.h>

int main(){
  long x,n,m,ans=1,w;
  int i;
  for(i=0;i<0,3;i++){
    scanf("%ld",&x);
  }
  for(i=0;i<n;i++){
    ans*=x;
    w=ans%m;
    ans+=w;
  }
  printf("%ld",ans);
}
