#include<stdio.h>
int main(){
	int N,t=2,i=0;
	scanf("%d",&N);
	while(N!=1){
		while(N%t==0)N/=t,i++;
		t++;
	}
	printf("%d",i);
	return 0;
}