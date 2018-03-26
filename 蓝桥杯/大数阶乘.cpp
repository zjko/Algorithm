#include<stdio.h> 
#define MAX 1000000
void display(int i) {
	for (int t = MAX / 10; t; t /= 10) {
		//输出中间数据的前端0  ，例如： 显示12345000001    12345 000001，为了正确显示中间的0也要输出
		printf("%d", i / t % 10);
	}
}
int main() {
	int a[500] = { 0 };
	int i, j,  k;		//k ：0指示器 
	int c;
	int N;
	scanf("%d",&N) ;

	a[0] = 1;//阶乘从1开始 
	for (i = 1, k = 0; i<=N; i++) {
		if (a[k] == 0)k++;	
		/*设置游标
		当阶乘数较大的时候，会出现末端（即数组前端）出现大量的0，而这些0可以不用参与计算，
		因此采用k作为一个指示器，即跳过这些0数据 
		*/ 
		for (j = k, c = 0; a[j]; j++) {
			a[j] = (a[j] * i + c); 
			c = a[j] / MAX;
			a[j] %= MAX;
		}
		
		a[j] = c;
		if (a[j] == 0)j--;
		printf("%d!\t=%d", i, a[j--]);
		for (; j >= 0; j--)
			display(a[j]);
		putchar('\n');
	}
}
