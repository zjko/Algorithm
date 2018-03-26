#include<stdio.h>
int main(){
	int N,t,a,MAX,G;//N为数组数据个数 t为临时变量 MAX数组最大值+1 G与a为漏斗 
	int array[1000];
	scanf("%d",&N);
	for(t=0;t<N;t++)
		scanf("%d",&array[t]);
	for(t=0,a=G=array[0];t<N;t++){
		if(array[t]>a)a=array[t];
		if(array[t]<G)G=array[t];
	}
	MAX=a+1;
	G--;
	while(1){
			a=MAX;
			for(t=0;t<N;t++)
				if(array[t]>G&&array[t]<a)a=array[t];
			if(a!=MAX)printf("%d ",a);
			else return 0;
			G=a;
	}
}