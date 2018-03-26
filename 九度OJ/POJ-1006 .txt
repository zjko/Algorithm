#include <stdio.h>
int main() {//孙子余数定理 
	int p,i,e,d,a,t = 1;
	while(scanf("%d %d %d %d",&p,&i,&e,&d) && d!=-1) {
		a = (p * 5544 + i * 14421 + e * 1288 + 21252 - d) % 21252;
		printf("Case %d: the next triple peak occurs in %d days.\n",t++,a?a:21252);
	}
	return 0;
}