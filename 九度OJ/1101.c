#include<stdio.h>
#include<stdlib.h>
int main() {
	char s[512],f[3],t=0;
	double data[3];
	char *p,*i;
	gets(s);
	p=s;
	while(t<3){
		i=p;
		while(*p&&*p!='+'&&*p!='-'&&*p!='*'&&*p!='/')p++;
		f[t]=*p;
		*p=0;
		data[t]=atof(i);
		p++;
		t++;
	}
	while(f[0]) {
		//printf("%.2f%c%.2f%c%.2f%c\n",data[0],f[0],data[1],f[1],data[2],f[2]);  输出运行过程 
		if(f[0]=='*'||f[0]=='/') {
			if(f[0]=='*')data[0]*=data[1];
			else if(data[1]==0)return puts("除数不能为0");
			else data[0]/=data[1];
			f[0]=f[1];
			f[1]=f[2];
			data[1]=data[2];
		} else {
			if(f[1]=='*'||f[1]=='/'){
				if(f[1]=='*')data[1]*=data[2];
				else if(data[2]==0)return puts("除数不能为0");
					else data[1]/=data[2];
					f[1]=f[2];
			}
			else {
				if(f[0]=='+')data[0]+=data[1];
				else data[0]-=data[1];
				f[0]=f[1];
				f[1]=f[2];
				data[1]=data[2];
			}
		}
		i=p;
		while(*p&&*p!='+'&&*p!='-'&&*p!='*'&&*p!='/')p++;
		f[2]=*p;
		*p=0;
		data[2]=atof(i);
		p++;
	}
	printf("%g",data[0]);
	return 0;
}