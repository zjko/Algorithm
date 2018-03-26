#include<stdio.h>
int main(){
	int A,B,t;
	scanf("%d%d",&A,&B);
	for(t=0;A+t<=B;){
		printf("%5d",A+t);
		t++;
		if(!(t%5))putchar('\n');
	}
	if(--t%5!=4)putchar('\n');
	printf("Sum = %d",(A+B)*(B-A+1)/2);
}