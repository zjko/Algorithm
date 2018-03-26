#include<stdio.h>
#include<stdlib.h>
int f(const char * a){
return *a>='0'&&*a<='9'?1:0;	
}
int main(){
  char *a,*b;
  int da=0,db=0;
  int i=0;
  char input[100];
  gets(input);
  a = input;
  while(input[i]){
    if(input[i]==' '){
      input[i]=0;
      b=&input[i]+1;
    }
    i++;
  }
  if(f(input)&&f(b-2))da = atoi(input);
  if(f(b)&&f(input+i-1))db = atoi(b);
  if(da)printf("%d + ",da);
  else printf("? + ");
  if(db)printf("%d = ",db);
  else printf("? = ");
  if(da&&db)printf("%d",da+db);
  else putchar('?');
}