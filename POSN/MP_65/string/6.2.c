#include<stdio.h>
#include<ctype.h>
int main() {
	char let[21],up[21];
	int i,j;
	scanf("%s",let);
	for(i=0;i<20;i++) {
		up[i]=toupper(let[i]);
	} 
	printf("%s",up);
}