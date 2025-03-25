#include<stdio.h> //not finish
#include<ctype.h>
#include<string.h>
int main() {
	char str[21];
	int i,x;
	gets(str);
	x=strlen(str);
	for(i=0;i<x;i++) {
		if(str[i]<='Z' && str[i]>='A') {
			printf("%c",toupper(str[i]));
		}
		else {
			printf("%c",tolower(str[i]));
		}
	}
}