#include<stdio.h>
int main() {
	int a,i,j,c=0;
	scanf("%d",&a);
	while (a!=0) {
		if((a%10)%2==1)
		c++;
		a/=10;
	}
	printf("%d",c);
}