#include<stdio.h>
#include<math.h>
int main(){
  int N,K,n;
  double M;
  scanf("%d",&N);
  while(N--){
    scanf("%d",&K);
    if(K==2||K==3)puts("Yes");
    else if(K>2){
      M=sqrt(K);
      for(n=3;n<=M;n+=2)
        if(K%n==0)break;
      if(K%n)puts("Yes");
      else puts("No");
    }else puts("No");
  }
}