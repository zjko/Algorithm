#include<stdio.h>
void fun(const char c,const char i){
	if(i<3)fun(getchar(),i+1);
	putchar(c);
}
int main(){
	fun(getchar(),0);
	return 0;
}