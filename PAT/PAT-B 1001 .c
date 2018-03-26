#include<stdio.h> 
int main(){
	int n,r=0;
	scanf("%d",&n);
	while(n!=1){
		n=n&1?(3*n+1)/2:n/2;
		r++;
	}
	printf("%d",r);
}