#include<stdio.h>
int main(void) {
	int m,c;
	scanf("%d",&m);
	char a='A';
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=i;j++) {
			if(c!=m) {
				printf("%c",a++);
				c++;	
			}
			if(a>'Z') {
				a='A';
			}
		}
		printf("\n");
	}
}