#include<stdio.h> 
#include<stdlib.h>
#define s(x,y) x+=y;y=x-y;x-=y;
int f(int a,int ch,int b){
		switch(ch){
			case 0:return a+b;
			case 1:return a-b;
			case 2:return a*b;
			case 3:
				if(b!=0&&a%b==0)return a/b;
				else return 0x123456;					//如果不能整除，则返回一个错误数字 （数字的目的只是为了让最终结果不可能正确 而随便给的。。。） 
		}
}
char p(int i){
	switch(i){
		case 0:return '+';
		case 1:return '-';
		case 2:return '*';
		case 3:return '/';
	}
}
int search(int a[4]){
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			for(int k=0;k<4;k++){
				if(	 f(f(f(a[0],i,a[1]),j,a[2]),k,a[3]) == 24   ) {printf("((%d%c%d)%c%d)%c%d = 24\n",a[0],p(i),a[1],p(j),a[2],p(k),a[3]);exit(0);}
				if(	 f(f(a[0],i,a[1]),j,f(a[2],k,a[3])) == 24   ) {printf("(%d%c%d)%c(%d%c%d) = 24\n",a[0],p(i),a[1],p(j),a[2],p(k),a[3]);exit(0);}
				if(  f(f(a[0],i,f(a[1],j,a[2])),k,a[3]) == 24   ) {printf("(%d%c(%d%c%d))%c%d = 24\n",a[0],p(i),a[1],p(j),a[2],p(k),a[3]);exit(0);}
				if(  f(a[0],i,f(f(a[1],j,a[2]),k,a[3])) == 24   ) {printf("%d%c((%d%c%d)%c%d) = 24\n",a[0],p(i),a[1],p(j),a[2],p(k),a[3]);exit(0);}
				if(  f(f(a[0],i,a[1]),j,f(a[2],k,a[3])) == 24   ) {printf("(%d%c%d)%c(%d%c%d) = 24\n",a[0],p(i),a[1],p(j),a[2],p(k),a[3]);exit(0);}
				if(  f(a[0],i,f(a[1],j,f(a[2],k,a[3]))) == 24   ) {printf("%d%c(%d%c(%d%c%d)) = 24\n",a[0],p(i),a[1],p(j),a[2],p(k),a[3]);exit(0);}
			}
}
int FA(int *a,const int len,const int n){
	if(n>2){
		search(a);
		return 0;
	}
	for(int i=n+1;i<len;i++){
		FA(a,len,n+1);
		s(a[n],a[i]);
		FA(a,len,n+1);
		s(a[n],a[i]);	
	}
}
int main(){
	int a[4];
	scanf("%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3]);
	FA(a,4,0);
	printf("No answer");
	return 0;
}
