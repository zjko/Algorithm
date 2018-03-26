#include<stdio.h>
int main(){
	char strA[10000];
	char strB[10000];
	int i,j;
	gets(strA);
	gets(strB);
	for(i=0;strA[i];i++){
		for(j=0;strB[j];j++)
			if(strA[i]==strB[j])break;
		if(!strB[j])putchar(strA[i]);
	}
}