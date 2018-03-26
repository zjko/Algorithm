#include<stdio.h>
char map[100][100]={0};			//用关联矩阵来表示双边关系（无向）
int N;
int f(const int a,const int b){
	int i,k;
	if(map[a][b]==1)return 0;	//判断a b是否为朋友 
	else if(map[a][b]==-1){		//判断a b是否为敌人 
		for(k=1;k<=N;k++)	//判断a b是否有共同的朋友 
			if(map[a][k]==map[b][k]&&map[b][k]==1)return 2;
		return 3;	
	}else {
		for(i=1;i<N;i++)	//判断a b是否为朋友的朋友 
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