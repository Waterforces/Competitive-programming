#include<stdio.h>
int main() {
	int a[5][3],i,j;
	for(i=0;i<5;i++) {
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0;i<5;i++) {
		printf("%d roles= %d\n",i+1,a[i][0]+a[i][1]+a[0][2]);
	}
	printf("\n");
	for(i=0;i<3;i++) {
		printf("%d colums= %d\n",i+1,a[0][i]+a[1][i]+a[2][i]+a[3][i]+a[4][i]);
	}
}