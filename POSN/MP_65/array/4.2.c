#include<stdio.h>
#include<math.h>
int main() {
	int a[4][4],b[4][4],i,j;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			b[i][j]=pow(a[i][j],2);
		}
	}
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			if(b[i][j]<10) {
				printf("%d  ",b[i][j]);
			}
			else {
				printf("%d ",b[i][j]);
			}
		}
		printf("\n");
	}
}