#include<stdio.h>
char *str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void fun(int n){
	if(n){
		fun(n/10);
		printf("%s ",str[n%10]);
	}
}
int main(){
	int N;
	scanf("%d",&N);
	if(N<0){
		printf("fu ");
		N=-N;
		fun(N/10);
	}else fun(N/10);
	printf("%s",str[N%10]);
}