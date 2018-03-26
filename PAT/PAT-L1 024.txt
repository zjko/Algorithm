#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	printf("%d",(t+2)%7==0?7:(t+2)%7);
}