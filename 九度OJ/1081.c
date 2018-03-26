#include<stdio.h>
//给定a0,a1,以及an=p*a(n-1) + q*a(n-2)中的p,q。这里n >= 2。 求第k个数对10000的模。
long long a(const int p,const int q,const int k,const int a0,const int a1) {
	if(k==0)return a0;
	else if(k==1)return a1;
	return (p*a(p,q,k-1,a0,a1)+q*a(p,q,k-2,a0,a1));
}
int main() {
	int a0,a1,p,q,k;
	scanf("%d%d%d%d%d",&a0,&a1,&p,&q,&k);
	if(k>=2)
	printf("%d",(p*a(p,q,k-1,a0,a1)+q*a(p,q,k-2,a0,a1))%10000);
	return 0;
}