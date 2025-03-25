#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	if(a > 100000) {
		b=a*10/100;
	}
	else if(a > 70000) {
		b=a*7/100;
	}
	else if(a == 50000) {
		b=a*5/100;
	}
	else if(a == 30000) {
		b=a*3/100;
	}
	else {
		b=a*1/100;
	}
	printf("%d",a+b);
}