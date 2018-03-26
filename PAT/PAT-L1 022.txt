#include<stdio.h> 
int main(){
	int N;
	int a,i=0,j=0;
	scanf("%d",&N);
	while(N--){
		scanf("%d",&a);
		if(a&1)i++;
		else j++;
	}
	printf("%d %d",i,j);
}