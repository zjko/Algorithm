#include<stdio.h>
int main(){
	int i;
	char c[4];
	while(scanf("%s",c)!=EOF){
		for(i=0;i<4;i++)putchar(c[3-i]);
		putchar('\n');
	}
	return 0;
}