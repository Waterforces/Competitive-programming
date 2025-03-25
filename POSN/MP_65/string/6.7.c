#include<stdio.h>
#include<string.h>
int main() {
	char str[10000];
	int num=0,let=0,alp=0,i,x;
	scanf("%s",str);
	x=strlen(str);
	for(i=0;i<x;i++) {
		if(str[i]=='A' || str[i]=='a' || str[i]=='E'  || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u') {
				alp++;
		}
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {
			let++;
		}
		if(str[i]>='0' && str[i]<='9') {
			num++;
		}
	}
	printf("Have number= %d\n",num);
	printf("Have character= %d\n",let);
	printf("Have alphabet= %d\n",alp);
}