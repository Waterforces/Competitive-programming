#include<stdio.h>
int main() {
	int a[20],b,c,i;
	float x=0;
	b=a[0];
	c=a[0];
	for(i=0;i<20;i++) {
		scanf("%d",&a[i]);
		if(a[i] > b) {
			b=a[i];
		}
		if(a[i] < c) {
			c=a[i];
		}
		x=x+a[i];
	}
	x=x/20;
	printf("Min= %d \n",c);
	printf("Max= %d \n",b);
	printf("average= %.2f",x);
}