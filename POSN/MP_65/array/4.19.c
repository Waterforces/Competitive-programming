#include<stdio.h>
int main() {
	int a[4][4],i,j;
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d",a[0][1]+a[0][2]+a[1][2]+a[0][3]+a[1][3]+a[2][3]);
}