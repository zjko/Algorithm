#include<stdio.h>
int main(){
	int a[10];
	int i=0,max;
	while(scanf("%d",&a[i])!=EOF){
		i++;
		if(i==10){
			max=a[0];
			for(i=0;i<10;i++)
				if(a[i]>max)max=a[i];
			printf("max=%d\n",max);
			i=0;
		}
	}
	return 0;
}