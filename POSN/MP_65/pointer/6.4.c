#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
	char str[1000],*p;
	gets(str);
	int i,x;
	x=strlen(str);
	for(i=0;i<x;i++) {
		p=&str[i];
		if(*p>='a' && *p<='z')
		str[i]=toupper(*p);
		else 
		str[i]=tolower(*p);
	}
	puts(str);
}