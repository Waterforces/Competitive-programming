#include<stdio.h>
#include<string.h>
int main() {
	char fname[10],sname[15],gen[7];
	printf("Enter first name : ");
	scanf("%s",fname);
	printf("Enter surname : ");
	scanf("%s",sname);
	printf("Enter gender : ");
	scanf("%s",gen);
	if(gen[0]=='f' || gen[0]=='F') {
		strcpy(gen,"Mrs.");
	}
	else {
		strcpy(gen,"Mr.");
	}
	printf("%s %s %s",gen,fname,sname);
}