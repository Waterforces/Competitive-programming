#include<stdio.h>
int main() {
	int a[20],b,c,i;
	float x=0;
	b=a[0];
	c=a[0];
	for(i=0;i<20;i++) {
		scanf("%d",&a[i]);
		if(a[i] > 0) {
		x=x+a[i];			
		}
	}
	x=x/20;
	printf("average= %.2f",x);
}