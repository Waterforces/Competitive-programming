#include<stdio.h>
int f(int a) {
	return ((a*a)+1);
}
int main() {
	int a;
	scanf("%d",&a);
	printf("%d ",f(a));
	return 0;
}