#include<stdio.h>
#include<string.h>
int main() {
	char str[1000],*p;
	int c=0,i,x;
	gets(str);
	x=strlen(str);
	for(i=0;i<x;i++) {
		p=&str[i];
		if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
		c++;
	//	printf("%d  ",c);
	}
	printf("%d",c);
}