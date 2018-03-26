#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	printf("2^%d = %d",i,2<<(i-1));
}