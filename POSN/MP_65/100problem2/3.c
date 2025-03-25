#include<stdio.h>
int main(void) {
	int m;
	char a='A';
	scanf("%d",&m);
	for(int i=1;i<=m;i++) {
		for(int j=m;j>i;j--) {
			printf(" ");
		}
		if(i==1) {
			printf("A");
		}
		printf("");
	}
}