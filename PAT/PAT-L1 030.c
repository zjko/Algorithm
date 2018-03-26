#include<stdio.h>
int main() {
	struct {
		char sex;
		char name[8];
	} stu[50];
	int N,n,m,min_n,min_m;
	scanf("%d",&N);
	for(n=0; n<N; n++)
		scanf("%d %s",&stu[n].sex,stu[n].name);
	for(n=0; ; n++) {
		for(m=N,min_n=min_m=0; m>n; m--) {
			if(stu[n].sex^stu[m].sex&&stu[n].name[0]&&stu[m].name[0]){
				if(m-n>min_m-min_n) {
					min_n=n;
					min_m=m;
				}
			}
		}
		if(m<n)break;
		printf("%s %s\n",stu[min_n].name,stu[min_m].name);
		stu[min_n].name[0]=stu[min_m].name[0]=0;
	}
}