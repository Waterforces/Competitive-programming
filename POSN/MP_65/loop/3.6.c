#include<stdio.h>
#include<ctype.h>
int main() 
{
	int i;
	char a,b;
	scanf("%c",&a);
	if(a>='a' && a<='z') {
		b=toupper(a);
	}
	for(i=b;i>='A';i--) {
		printf("%c",i);
	}
}