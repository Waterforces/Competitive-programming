#include<stdio.h>
int main() {
	int a[3][2],b[2][3],i,j;
	for(i=0;i<3;i++) {
		scanf("%d %d",&a[i][0],&a[i][1]);
		b[0][i]=a[i][0];
		b[1][i]=a[i][1];
	}
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}