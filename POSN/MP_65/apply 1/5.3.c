#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	if(a < 10) {
		printf("000%d",a);
	}
	else {
		while(a != 0) {
			b=a%10;
			c=c*10+b;
			a/=10;
		}
		printf("%d",c);
	}
}