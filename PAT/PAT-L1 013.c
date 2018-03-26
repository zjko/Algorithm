#include<stdio.h>
int main(){
	int S,n,i,j;
	scanf("%d",&n);
	for(i=2,j=S=1;i<=n;i++){
		j*=i;
		S+=j;
	}
	printf("%d",S);	
}