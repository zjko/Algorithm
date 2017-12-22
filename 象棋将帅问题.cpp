#include<stdio.h>
int main(){
	int a,b;
	for(a=1;a<10;a++)
		for(b=1;b<10;b++)
			if(b%3 == a%3 )continue;
			else printf("a=%d,b=%d\n",a,b);
}
