 #include<stdio.h>
 int main(){
 	int a,N,t,p;
 	scanf("%d",&N);
 	for(p=2,t=1;t<N;p++){
 		a=p;
 		while(a%2==0)a/=2;
		while(a%3==0)a/=3;
		while(a%5==0)a/=5;
		if(a==1)t++;
	 }
	 printf("%d",N==1?1:p-1);
 }