#include<stdio.h>
void fun(const char m,int b){
	if(b==0)return ;
	fun(m,b/m);
	printf("%d",b%m);
}
int main(){
	int a,b;
	char m=10;
	while(1){
		scanf("%d%d%d",&m,&a,&b) ;
		if(!m)return 0;
		fun(m,a+b);	
		putchar('\n');
	}
}