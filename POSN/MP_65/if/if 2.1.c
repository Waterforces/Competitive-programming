#include<stdio.h>
int main() {
	int a,b,c,d;
	scanf("%d",&a);
	if(a < 0 || a > 100) {
		printf("Invalid input!!");
	}
	scanf("%d",&b);
	if(b < 0 || b > 100) {
		printf("Invalid input!!");
	}
	scanf("%d",&a);
	if(c < 0 || c > 100) {
		printf("Invalid input!!");
	}
	scanf("%d",&d);
	if(d < 0 || d > 100) {
		printf("Invalid input!!");
	}
	printf("%d",(a+b+c+d)/4);
}