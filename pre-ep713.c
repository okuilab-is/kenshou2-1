#include <stdio.h>

int main(){
  long x,n,m,ans=1,w;
  int i;
  scanf("%ld %ld %ld",&x,&n,&m);
  
  for(i=0;i<n-1;i++){
    ans=ans*x;
    w=ans%m;
    ans+=w;
  }
  ans=(ans*x)%m;
  
  printf("%ld\n",ans);
}
