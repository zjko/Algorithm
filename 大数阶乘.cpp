#include<stdio.h> 
#define MAX 1000000
void display(int i) {
	for (int t = MAX / 10; t; t /= 10) {
		printf("%d", i / t % 10);
	}
}
int main() {
	int a[500] = { 0 };
	int i, j,  k;
	int c;
	int N;
	scanf("%d",&N) ;

	a[0] = 1;
	for (i = 1, k = 0; i<=N; i++) {
		if (a[k] == 0)k++;
		for (j = k, c = 0; a[j]; j++) {

			a[j] = (a[j] * i + c);
			c = a[j] / MAX;
			a[j] %= MAX;
		}
		//Êä³ö 
		a[j] = c;
		if (a[j] == 0)j--;
		printf("%d!\t=%d", i, a[j--]);
		for (; j >= 0; j--)
			display(a[j]);
		putchar('\n');
	}
}
