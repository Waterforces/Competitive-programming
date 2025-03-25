#include<stdio.h>
int fac(int a) {
	if(a==1) {
		return 1;
		
	}
	return (a*fac(a-1));
}
int main(void) {
	int a;
	scanf("%d",&a);
	printf("%d",fac(a));
	return 0;
}