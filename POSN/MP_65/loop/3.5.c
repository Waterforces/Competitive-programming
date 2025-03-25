#include<stdio.h>
int main() {
	int a,b,c,i,j;
	scanf("%d %d",&a,&b);
	for(i=1;i<=1000;i++) {
		if(a%i==0 && b%i==0) {
			printf("%d ",i);
		}
	}
}