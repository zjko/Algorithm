#include<stdio.h> 
int main(){
  int a[3],i,j;
  scanf("%d%d%d",&a[0],&a[1],&a[2]);
  for(i=0;i<2;i++)
    for(j=i+1;j<3;j++)
      if(a[i]>a[j]){
        a[i]+=a[j];
        a[j]=a[i]-a[j];
        a[i]-=a[j];
      }
  printf("%d->%d->%d",a[0],a[1],a[2]);
}