#include<stdio.h>
int main(void) {
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	if(m==2) {
		for(i=1;i<=n;i++) {
			for(j=1;j<i;j++) {
				printf(" ");
			}
			printf("\\\n");
		}
		for(i=1;i<=n;i++) {
			for(j=n;j>i;j--) {
				printf(" ");
			}
			printf("/\n");
		}
	}
	else {
		for(i=1;i<=n;i++) {
			for(j=n;j>i;j--) {
				printf(" ");
			}
			printf("/\n");
		}
		for(i=1;i<=n;i++) {
			for(j=1;j<i;j++) {
				printf(" ");
			}
			printf("\\\n");
		}
	}
	return 0;
}