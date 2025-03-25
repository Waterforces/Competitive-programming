#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Input String\t==> ");
	gets(a);
	int x,i,j,k,l;
	x=strlen(a);
	char b;
	printf("Border Character\t==> ");
	scanf("%c",&b);
	int h,w,n;
	printf("Height String\t==> ");
	scanf("%d",&h);
	printf("Width String\t==> ");
	scanf("%d",&w);
	printf("Border Width\t==> ");
	scanf("%d",&n);
	for(j=1;j<=n;j++) {
		for(i=1;i<=2*n+x*4;i++) {
			printf("%c",b);
		}
		printf("\n");
	}
	for(i=1;i<=w;i++) {
		for(j=1;j<=n;j++) {
			printf("%c",b);
		}
		for(k=1;k<=w;k++) {
			printf("%s",a);
		}
		for(j=1;j<=n;j++) {
			printf("%c",b);
		}
		printf("\n");
	}
	for(j=1;j<=n;j++) {
		for(i=1;i<=2*n+x*4;i++) {
			printf("%c",b);
		}
		printf("\n");
	}
}