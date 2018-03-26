#include<stdio.h>
int main(){
	int a,i,j,k;
	char c;
	scanf("%d %c",&a,&c);
	k=a*5%10>4?a/2+1:a/2;
	for(i=0;i<k;i++,putchar('\n'))
		for(j=0;j<a;j++)
			putchar(c);
}