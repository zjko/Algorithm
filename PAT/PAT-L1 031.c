#include<stdio.h>
#include<math.h>
int main(){
	int N,n;
	float K;
	int H[20],W[20];
	scanf("%d",&N);
	for(n=0;n<N;n++){
		scanf("%d %d",&H[n],&W[n]);
		K = (H[n]-100)*1.8;
		if(fabs(W[n]-K)<K*0.1)
			puts("You are wan mei!");
		else if(K>W[n])
			puts("You are tai shou le!");
		else puts("You are tai pang le!");
	}
}