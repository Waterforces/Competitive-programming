#include<stdio.h>
#include<string.h>
int main() {
	char a[100],b[100];
	gets(a);
	gets(b);	
	int i,j,c=0,x;
	x=strlen(a);
	for(i=0;i<x;i++) {
		for(j=0;j<x;j++) {
			if(a[i]==b[j])
			c++;
		}
	}
	printf("%d\n",x);
	printf("%d\n",c);
	if(c==x)
	printf("YES");
	else
	printf("NO");
}