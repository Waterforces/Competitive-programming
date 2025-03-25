#include<stdio.h>
int main() {
	double a;
	printf("Please input area: ");
	scanf("%lf",&a);
	if(a < 80) {
		printf("Total service costs: %.2lf baht",a*12.50);
	}
	else if(a >79 && a <= 200) {
		printf("Total service costs: %.2lf baht",a*10);
	}
	else if(a >= 200 && a <= 400) {
		printf("Total service costs: %.2lf baht",a*7.50);
	}
	else {
		printf("Total service costs: %.2lf baht",a*5);
	}
}