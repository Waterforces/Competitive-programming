#include<stdio.h>
int main() {
	int a[5],i,j;
	for(i=0;i<5;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++) {
		printf("%d  ",a[i]);
		for(j=1;j<=a[i];j++) {
			printf("*");
		}
		printf("\n");
	}
}