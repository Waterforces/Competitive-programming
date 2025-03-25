#include<stdio.h>
int main() {
	int a[4][4],i,j;
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			scanf("%d ",&a[i][j]);
		}
	}
	printf("left= %d   ",a[0][0]+a[1][1]+a[2][2]+a[3][3]);
	printf("right= %d",a[0][3]+a[1][2]+a[2][1]+a[3][0]);
}