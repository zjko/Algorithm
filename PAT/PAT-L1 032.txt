#include<stdio.h>
#include<string.h>
int main(){
	int N,len,i;
	char c;
	char str[10000];
	scanf("%d %c",&N,&c);
	getchar();
	gets(str);
	len=strlen(str);
	if(len-N<0){
		for(i=N-len;i--;putchar(c));
		printf("%s",str);
	}
	else printf("%s",&str[len-N]);
}