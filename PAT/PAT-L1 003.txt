#include<stdio.h>
int main(){
	char c;
	int a[10]={0};
	while((c=getchar())!='\n')a[c-'0']++;
	for(c=0;c<10;c++)if(a[c])printf("%d:%d\n",c,a[c]);
}