#include<stdio.h>
#include<string.h>
int main() {
	char str[1000],*p,*t;
	int i,x,j,c=0;
	gets(str);
	x=strlen(str);
	for(i=0,j=x-1;i<x;i++,j--) {
		p=&str[i];
		t=&str[j];
		if(*p==*t)
		c++;
	}
	if(c==x) 
	printf("YES");
	else 
	printf("NO");
}