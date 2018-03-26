#include<stdio.h>
int main(){
	char c;
	int G,P,L,T;
	G=P=L=T=0;
	while((c=getchar())!='\n'){
		if(c=='g'||c=='G')G++;
		else if(c=='p'||c=='P')P++;
		else if(c=='l'||c=='L')L++;
		else if(c=='t'||c=='T')T++;
	}
	while(G||P||L||T){
		if(G)putchar('G'),G--;
		if(P)putchar('P'),P--;
		if(L)putchar('L'),L--;
		if(T)putchar('T'),T--;
	}
}