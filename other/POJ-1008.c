#include<stdio.h>
#include<string.h>
int main(){
	int n;
	const char *Haab[19]={	"pop","no","zip","zotz","tzec",
						"xul","yoxkin","mol","chen","yax",
						"zac","ceh","mac","kankin","muan",
						"pax","koyab","cumhu","uayet"};
	const char *Tzolkin[20]={	"imix","ik","akbal","kan","chicchan",
						"cimi","manik","lamat","muluk","ok",
						"chuen","eb","ben","ix","mem",
						"cib","caban","eznab","canac","ahau"};
	char str[10];
	int year,month,day,count;
	scanf("%d",&n);
	while(n--){
		scanf("%d. %s%d",&day,str,&year);
		if(!strcmp(str,"uayet")&&day>4 )continue ;
		for(month=0;month<19;month++)
			if(!strcmp(str,Haab[month]))break;
		count = year * 365 + month * 20 + day ;
		printf("%d %s %d\n",count%13 + 1,	Tzolkin[count%20],	count/260);
	}
	return 0;
}