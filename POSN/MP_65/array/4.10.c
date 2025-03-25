#include<stdio.h>
int main() {
	int a[4],b[4],i,j,c;
	for(i=0;i<4;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++) {
		scanf("%d",&b[i]);
	}
	c=0;
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			if(a[i]==b[j]) {
				c++;
			}
		}
	}
	printf("%d",c);
} 