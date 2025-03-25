#include<stdio.h>
int main() {
	int d1,da;
	scanf("%d",&d1);
	scanf("%d",&da);
	int i,j;
	for(i=1;i<d1;i++) {
		printf("    ");
	}
	for(i=1;i<=da;i++) {
		for(j=1;j<=7;j++,i++) {
			if(i==1) {
				j=d1;
			}
			if(i>da) {
				break;
			}
			if(i<10) {
				printf(" ");
			}
			printf("%d  ",i);
		}
		printf("\n");
		i--;
	}
}