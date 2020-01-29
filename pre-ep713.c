#include <stdio.h>

int main(){
  long x,n,m,ans=1,w;
  int i;
  scanf("%ld %ld %ld",&x,&n,&m);
  
  for(i=0;i<n;i++){
    ans=ans*x;
    w=ans%m;
    ans+=w;
  }
  printf("%ld\n",ans);
}
