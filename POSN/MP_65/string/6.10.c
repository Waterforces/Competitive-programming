#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	gets(str);
	int i=0,j,x,c=0;
	x=strlen(str);
	j=x-1;
	while(i<x) {
		if(str[i]==str[j]) {
			c++;
		}
		++i;
		--j;
	}
	if(c==x) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}