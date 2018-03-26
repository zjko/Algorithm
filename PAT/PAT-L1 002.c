#include<stdio.h>
int main(){
  int N,n,p,t,i,c,G;
  scanf("%d %c",&N,&c);
  for(n=1;(n*n-1)/2 + n<N;n+=2);
  n-=2;
  t=n;
  G=0;
  while(t<=n){
    for(p=(n-t)/2;p--;putchar(' '));
    for(i=t;i--;putchar(c));  
    putchar('\n');
    if(G)t+=2;
    else if(t-2>0)t-=2;
    else G=1,t+=2;
  }
  printf("%d",N-(n*n-1)/2 - n);
}