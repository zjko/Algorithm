#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct complex {
		int a;
		int i;
		struct complex * next; 
	}*head=0;
void Pop(){
struct complex * p=head,* max=head;
int size=0;
	if(p==0){		//空表 
		puts("empty");	
	}else{
		while(p->next){
			if((p->a)*(p->a)+(p->i)*(p->i)>(max->a)*(max->a)+(max->i)*(max->i))
			max=p;
		}
		printf("%d%ci%d\n",max->a,max->i<0?0:'+',max->i);
		if(max==head)head=max->next;
		else {
			for(p=head;!(p->next==max);p=p->next);
				p->next = max ->next;
			}	
		p=head;
		while(p){
			size++;
			p=p->next;
		}
		printf("SIZE = %d",size);
	}
}
void Insert(char *Data){
	struct complex * p ; 
	char *data=Data;
	int t=0,size=0;
	char f=1;
	if(head==0){
		head = p =(struct complex *)malloc(sizeof(struct complex));
		head ->next = 0;
	}else {
		p =(struct complex *)malloc(sizeof(struct complex));
		p->next = head->next;
		head ->next = p;
	}
	while(*data!='i'){
		if(*data>='0'&&*data<='9'){
			t*=10;
			t+=*data-'0';
		}else if(*data=='+'||*data=='-'){
			p->a = t*f;
			t=0;
			if(*data=='-')
				f=-1;
			else f=1;
		}
		data++; 
	}
	t=0;
	
	while(*(++data)){
		if(*data>='0'&&*data<='9'){
			t*=10;
			t+=*data-'0';
		}
	}
	p->i = t*f;
	p=head;
	while(p){
		size++;
		p=p->next;
	}
	printf("SIZE = %d\n",size);
}
int main(){
	char  input[255],* data,*command;
	int n;
	scanf("%d",&n);
	getchar();
	while(n--){	 
		gets(input);
		command=data=input;
		while(*data&&*data!=' ')data++; 
		*(data++)=0;
		if(!strcmp("Pop",command))Pop();
		else if(!strcmp("Insert",command))Insert(data);
		else puts("输入错误，无此命令");
	}
	return 0;
} 