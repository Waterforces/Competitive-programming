#include<stdio.h>
int main() {
	int d1,da;
	scanf("%d",&d1);
	scanf("%d",&da);
	int i,j,x=1,a=0;
	for(i=1;i<d1;i++) {
		printf("    ");
	}
	for(i=1;i<=da;i++) {
		for(j=1;j<=7;j++,i++) {
			if(x==1) {
				j=d1;
				x++;
			}
			if(i>da) {
				i=1;
				a++;
			}
			if(i<10) {
				printf(" ");
			}
			if(a==3) {
			break;
		}
			printf("%d  ",i);
		}
		printf("\n");
		i--;
		if(a==3) {
			break;
		}
	}
}