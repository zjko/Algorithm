#include<stdio.h>
char *str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void f(const int sum){
	if(!sum)return ;
	f(sum/10);
	printf("%s ",str[sum%10]);
}
int main(){
	int sum=0;
	char c;
	while((c=getchar())!='\n')sum+=c-'0';
	f(sum/10);
	printf("%s",str[sum%10]);
}