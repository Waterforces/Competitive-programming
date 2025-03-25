#include<stdio.h>
int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b) printf("2");
	else if(b%a==0) printf("%d",b/a);
	else printf("%d",b/a+1);
}