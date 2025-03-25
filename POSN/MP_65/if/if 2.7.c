#include<stdio.h>
#include<math.h>
int main() {
	int a;
	float r,Pi=3.14159;
	printf("Please input radius: ");
	scanf("%f",&r);
	printf("Calculator Menu: \n");
	printf("\t1.Find area\n");
	printf("\t2.Find circumference\n");
	printf("Choose menu:");
	scanf("%d", &a);
	switch(a) {
		case 1: printf("Area= %.2f",Pi*r*r); break;
		case 2: printf("Circumference= %.2f",2*Pi*r); break;
	}
}