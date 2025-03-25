#include<stdio.h>
int main() {
	char a;
	scanf("%c",&a);
	if(a >64 && a < 91) {
		printf("Small letter");
	}
	else if(a > 96 && a < 123) {
		printf("Big letter");
	}
	else {
		printf("Error");
	}
}