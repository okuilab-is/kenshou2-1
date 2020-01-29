#include <stdio.h>

int main(){
  long x,n,m,a=1,w;
  int i;
  scanf("%ld %ld %ld",&x,&n,&m);
  
  for(i=0;i<n;i++){
    a=(a*x)%m;
  }
  
  printf("%ld\n",ans);
}
