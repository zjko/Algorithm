#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int a[100000];
void PeekMedian(int top){
  const int n = top&1? top / 2 : (top + 1) / 2 ;
  int i,j,min;
  if(top==0)puts("Invalid");
  else {
    for(i=1,min=a[0];i<top;i++)
      if(a[i]<min)min=a[i];
    for(i=0,j=0;j<n&&i<top;i++)
      if(a[i]>min)j++;
    printf("%d\n",a[i]);
  }
}
int main(){
  int top=-1;
  int N,i,p;
  char *data;
  char input[12];
  scanf("%d",&N);
  getchar();
  while(N--){
    gets(input);
    i=0;
    while(input[i]){
      if(input[i]==' '){
        data = &input[i] + 1;
        input[i] = 0;
      }
      i++;
    }
    if(!strcmp(input,"Push"))a[++top]= atoi (data);
    else if(!strcmp(input,"Pop"))
      if(top>-1)printf("%d\n",a[top--]);
      else puts("Invalid");
    else if(!strcmp(input,"PeekMedian"))PeekMedian(top+1);
  
  }
}