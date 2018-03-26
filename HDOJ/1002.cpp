#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
struct BigInt{
	char num[1005];
	int length;
	void add(struct BigInt * N1,struct BigInt * N2){
			const int Offset = abs(N1->length-N2->length);
			struct BigInt * MaxL = N1->length>N2->length?N1:N2;
			struct BigInt * MinL = N1->length<N2->length?N1:N2;
			int carry = 0;
			for(int i=0;MinL->length-i>=0;i++){
				MaxL->num[MaxL->length-i]=(MaxL->num[MaxL->length-i]+MinL->num[MinL->length-i]-64+carry);
				carry=MaxL->num[MaxL->length-i]%10;
				MaxL->num[MaxL->length-i]%=10;
				MaxL->num[MaxL->length-i]+=32;
			}
			if(carry)
				printf("%d%s",carry,MaxL->num);
			else printf("%s",MaxL->num);
			puts("_______________________")
	};
};
int main(){
	struct BigInt * N1 = (struct BigInt *)malloc(sizeof(struct BigInt));
	struct BigInt * N2 = (struct BigInt *)malloc(sizeof(struct BigInt));
	int T;
	char c;
	scanf("%d",&T);
	while(T--){
		int i; 
		for(i=0;(c=getchar())!=' ';i++)
			N1->num[i]=c;
		N1->length=i;
		for(i=0;(c=getchar())!='\n';i++)
			N2->num[i]=c;
		N2->length=i;
		N1->add(N1,N2);
	}
	return 0;
} 
