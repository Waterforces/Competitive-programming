#include<stdio.h>
int main() {
	int a[3][2],b[3][2],i,j;
	for(i=0;i<3;i++) {
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<3;i++) {
		scanf("%d %d",&b[i][0],&b[i][1]);
	}
	for(i=0;i<3;i++) {
		printf("%d %d",a[i][0]+b[i][0],a[i][1]+b[i][1]);
		printf("\n");
	}
}