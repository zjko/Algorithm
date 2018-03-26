#include<stdio.h>
int main(){
	int array[10];
	int G,t;
	char n;
	for(n=0;n<10;n++)
		scanf("%d",&array[n]);
	for(n=0;n<10;n++)
		if(array[n]&1){
			t=array[n];
			break;
		}
		t--;
	G=101;
	while(1){
		t=-1;
		for(n=0;n<10;n++)
			if(array[n]&1&&array[n]>t&&array[n]<G)
				t=array[n];
		if(t!=-1)printf("%d ",t);
		else break;
		G=t;
	}
	G=-1;
	while(1){
		t=101;
		for(n=0;n<10;n++)
			if(!(array[n]&1)&&array[n]<t&&array[n]>G)
				t=array[n];
		if(t!=101)printf("%d ",t);
		else break;
		G=t;
	}
	return 0; 
}