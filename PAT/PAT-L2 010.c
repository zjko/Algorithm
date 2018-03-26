#include<stdio.h>
char map[100][100]={0};
int N;
int f(const int a,const int b){
	int i,k;
	if(map[a][b]==1)return 0;
	else if(map[a][b]==-1){
		for(k=1;k<=N;k++)
			if(map[a][k]==map[b][k]&&map[b][k]==1)return 2;
		return 3;	
	}
	else {
		for(i=1;i<N;i++)
			if(map[a][i]==1)return f(i,b)==0?0:1;
		return 1; 
	}
}
int main(){
	int K,M;
	int n,a,b,k;
	scanf("%d%d%d",&N,&M,&K);
	for(n=0;n<M;n++){
		scanf("%d%d%d",&a,&b,&k);
		map[a][b]=k;
		map[b][a]=k;
	}
	//______________________________________
	/*
	printf("      1  2  3  4  5  6  7 \n");
	for(int i=1;i<=N;i++){
		printf("\n%-4d",i);
		for(int j=1;j<=N;j++) 
			printf("%3d",map[i][j]);
	}
	putchar('\n');
	*/
	//______________________________________	
	while(K--){
		scanf("%d%d",&a,&b);
		switch(f(a,b)){
			case 0:puts("No problem");break;
			case 1:puts("OK");break;
			case 2:puts("OK but...");break;
			case 3:puts("No way");break;
		}
	}
}