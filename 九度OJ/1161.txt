#include<stdio.h>
#include<math.h>
char map[3000][3000];
char pt[1000][1000];
void copy(const int sx,const int sy,const char fun) {
	int x,y;
		for(x=0;pt[x][0]; x++)
			for(y=0;pt[0][y]; y++)
				map[x+sx][y+sy]=fun==' '?' ':pt[x][y];
}
int main() {
	int N,Q;
	int q,x,y,sx,sy;
	while(scanf("%d",&N),N) {
		getchar();
		for(x=0; x<N; x++)gets(map[x]);
		scanf("%d",&Q);
		if(pow(N,Q)>3000)return puts("³¬³ö·¶Î§");
		for(q=0; q<Q; q++) {
			for(x=0;map[x][0];x++)
				for(y=0;map[0][y];y++)
					pt[x][y]=map[x][y];
			for(x=0,sx=0; x<N; x++,sx+=pow(N,q))
				for(y=0,sy=0; y<N; y++,sy+=pow(N,q))
					copy(sx,sy,pt[x][y]);	
		}		
		for(x=0; x<pow(N,Q); x++)puts(map[x]);
	}
	return 0;
}