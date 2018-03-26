#include<stdio.h>
void fun(const int a,const int b,const int c) {
	if(b==1) {
		if(a == c)printf("Accepted");
		else	printf("Wrong Answer");
		return ;
	} else if (b<1) {
		printf("Wrong Answer");
		return ;
	}
	fun(a,b-1,c-a);
}
int main() {
	char a[1000];
	int b[3]= {0};
	int i,t1,t2;
	gets(a);
	// 将输入分成三部分  z之前的o   j和z之间的o  j之后的o
	// t1 o计数器   t2  表示当前计数位置
	for(i = 0 , t1 = 0 ,t2 =0; a[i]&&i<1000 ; i++ ) {
		if(a[i]!='o') {
			b[t2] = t1;
			t1 = 0;
			t2 ++ ;
		} else	t1 ++;
	}
	b[2] = t1;
	fun(b[0],b[1],b[2]);
	return 0; 
}