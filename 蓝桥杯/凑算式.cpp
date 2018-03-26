/*看这个算式：
☆☆☆ + ☆☆☆ = ☆☆☆
如果每个五角星代表 1 ~ 9 的不同的数字。
这个算式有多少种可能的正确填写方法？
173 + 286 = 459
295 + 173 = 468
173 + 295 = 468
183 + 492 = 675
以上都是正确的填写法！
注意：
111 + 222 = 333 是错误的填写法！
因为每个数字必须是不同的！ 
也就是说：1~9中的所有数字，每个必须出现且仅出现一次！
注意：
不包括数字“0”！
注意：
满足加法交换率的式子算两种不同的答案。
 
*/
#include<stdio.h>
int count=0;
int main(){
	int fun(int num);
	int num;
	for(num=123456;num<899999;num++){
		if(fun(num*1000+(num/1000+num%1000))||num/1000+num%1000>999)continue;
		printf("%d+%d=%d\n",num/1000,num%1000,num/1000+num%1000);	
		count++;	
	}
	printf("%d",count);
	return 0;
}
int fun(int num){	
	int a,b,k=0;	
	for(a=1;a<10;a++){
	b=num,k=0;
	do{
		if(b%10==0)return 1;
		if(b%10==a){
		k=1;
		break;
		} 		 
	}while(b/=10);
	if(!k)return 1;;
	}
return 0;
}
