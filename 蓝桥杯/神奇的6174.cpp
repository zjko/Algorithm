#include<stdio.h>
#include<string.h>
int fun(int num){
	int sort[10]={0};
	int a,b;
	int CNT=1;
	memset(sort,0,sizeof(sort));
	for(int i =0;i<4;i++){
		sort[num%10]++;
		num/=10;
	}
	while(1) {
//		for(int i=0;i<10;i++)printf("%d ",sort[i]);
//		putchar('\n');
		a=b=0;
		for(int t,i=9;i>=0;i--){
			t=sort[i];
			while(t){
				a=a*10+i;
				t--;
			}
		}
		for(int t,i=0;i<10;i++){
			t=sort[i];
			while(t){
				b=b*10+i;
				t--;
			}
		}
		printf("%d %d %d\n",a,b,a-b);
		a-=b;
		if(a==6174)return CNT;
		memset(sort,0,sizeof(sort));
		for(int i =0;i<4;i++){
			sort[a%10]++;
			a/=10;
		}
		CNT++;
	}
	return CNT;
}
int main(){
	int a;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		printf("%d\n",fun(a));
	}
}
