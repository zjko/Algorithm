/*
标题：李白打酒

    话说大诗人李白，一生好饮。幸好他从不开车。

    一天，他提着酒壶，从家里出来，酒壶中有酒2斗。他边走边唱：
    无事街上走，提壶去打酒。
	店加一倍，遇花喝一斗。

    这一路上，他一共遇到店5次，遇到花10次，已知最后一次遇到的是花，他正好把酒喝光了。 

    请你计算李白遇到店和花的次序，可以把遇店记为a，遇花记为b。则：babaabbabbabbbb 就是合理的次序。像这样的答案一共有多少呢？请你计算出所有可能方案的个数（包含题目给出的）。
*/
#include<stdio.h>
#include<stdlib.h>
int count=0;
char map[16]="";
int main(){
	void fun(bool k,int hotel,int flower,int liquor,int a);
	map[0]='A';
	fun(true,4,10,1,1);// hotel
	fun(false,5,9,1,1);// hotel
	printf("%d",count);
	return 0; 
}

void fun(bool k,int hotel,int flower,int liquor,int a){
	if(k)liquor*=2;
	else liquor--;
	if(liquor>flower||liquor<0)return ;
	if(!hotel&&!flower&&!liquor){//酒店完了 桃花也完了，就业完了 
	count++;
	printf("%s\n",map);

	return ;
	}
	
	if(hotel>0){
		map[a]='A';
		fun(true,hotel-1,flower,liquor,a+1);	
	}
	if(flower>1||hotel==0){
		map[a]='B';
		fun(false,hotel,flower-1,liquor,a+1);
	}
	return ;
}


